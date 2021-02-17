#include "text_to_bitmap.h"

namespace fs = std::filesystem;

void create_image(Image *img, string file_name) {
    fs::path p {file_name};
    int size = fs::file_size(p);
    int leg = sqrt(size) + 0.5;
    image_init(img, leg, leg);
    Image_fill(img, Pixel{0, 0, 0});
}

void text_conversion(string file_name, ostream& os) {
    Image *img = new Image; 
    ifstream fin; 
    fin.open(file_name); 
    create_image(img, file_name);
    Pixel p;
    for(int i = getImgHeight(img) - 1; i >= 0; i--){
        for(int j = 0; j < getImgWidth(img); j++){
            if(!fin.eof()) fin >> p.b;
            else p.b = 0;
            if(!fin.eof()) fin >> p.g;
            else p.g = 0;
            if(!fin.eof()) fin >> p.r;
            else p.r = 0;
            writePixel(img, p, i, j);
        }
    }
    printImg(img, os);
    fin.close();
    delete img;
}