#ifndef __TEXT_TO_BITMAP__
#define __TEXT_TO_BITMAP__

#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>

#include "Matrix.h"
#include "Image.h"

using namespace std;

void text_conversion(string file_name);
void create_image(Image *img, ifstream& is, string file_name);
void set_pixel(Image *img, int r, int g, int b);

#endif