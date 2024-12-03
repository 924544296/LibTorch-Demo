#include "functions.h"


void show_image()
{
	//cv::Mat image = cv::imread("D:/data/celeba/img_align_celeba/000918.jpg");
	cv::Mat image(128, 64, CV_8UC3, cv::Scalar(0, 0, 0));
	std::cout << "图像尺寸：" << image.size() << std::endl;
	cv::imshow("图啊", image);
	cv::waitKey(0);
}


void show_tensor()
{
	torch::Device device(torch::kCUDA);
	torch::Tensor x = torch::randn({ 3, 2 });
	cout << "随机数：" << endl << x << endl << torch::cuda::is_available() << endl << x.to(device) << endl;
}


void get_image_list(string path, vector<string>& file)
{
	//
	intptr_t file_handle = 0;
	struct _finddata_t file_info {};
	string temp;
	//
	if ((file_handle = _findfirst(temp.assign(path + "*").c_str(), &file_info)) != -1)
	{
		do
		{
			if (strcmp(file_info.name,".") != 0 && strcmp(file_info.name,"..") != 0)
			{
				file.push_back(path + file_info.name);
			}
		} while (_findnext(file_handle, &file_info) == 0);
		_findclose(file_handle);
	}


}