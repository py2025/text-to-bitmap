#include "text_to_bitmap.h"

void create_image(Image *img, long size) {
    int leg = sqrt(size/3) + 1;
    image_init(img, leg, leg);
    Image_fill(img, Pixel{0, 0, 0});
}

long count_characters(istream& is) {
    long total = 0;
    char c;
    while (is >> c) {
        ++total;
    }
    return total;
}

void text_conversion(string file_name, ostream& os) {
    Image *img = new Image; 
    ifstream fin; 
    fin.open(file_name);
    create_image(img, count_characters(fin));
    fin.close();
    fin.open(file_name);
    char r, g, b;
    Pixel p;
    for(int i = getImgHeight(img) - 1; i >= 0; i--){
        for(int j = 0; j < getImgWidth(img); j++){
            if(!fin.eof()) fin >> b; else b = '\0';
            if(!fin.eof()) fin >> g; else g = '\0';
            if(!fin.eof()) fin >> r; else r = '\0';

            p = {(int) r, (int) g, (int) b};

            writePixel(img, p, i, j);
        }
    }
    printImg(img, os);
    fin.close();
    delete img;
}