#ifndef __TEXT_TO_BITMAP__
#define __TEXT_TO_BITMAP__

#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <cmath>
#include <cassert>

#include "Matrix.h"
#include "Image.h"

using namespace std;

void text_conversion(string file_name, ostream& os);
void create_image(Image *img, long size);
long count_characters(istream& is);

#endif