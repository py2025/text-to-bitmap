#ifndef __TEXT_TO_BITMAP__
#define __TEXT_TO_BITMAP__

#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <cmath>

#include "Matrix.h"
#include "Image.h"

using namespace std;

void text_conversion(string file_name, ostream& os);
int create_image(Image *img, string file_name);

#endif