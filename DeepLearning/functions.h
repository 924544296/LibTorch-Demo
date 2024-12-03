#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;
#include <io.h>
#include <opencv2/opencv.hpp>
#include <torch/torch.h>


void show_image();
void show_tensor();
void get_image_list(string path, vector<string>& file);

#endif // FUNCTIONS_H