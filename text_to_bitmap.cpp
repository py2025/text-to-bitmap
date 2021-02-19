#include "text_to_bitmap.h"

void create_image(Image *img, long size) {
    int leg = sqrt(size/3) + 1;
    image_init(img, leg, leg);
    Image_fill(img, Pixel{32, 32, 32});
}

long count_characters(istream& is) {
    long total = 0;
    while (!is.eof()) {
        is.get();
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
    int r, g, b;
    Pixel p;
    for(int i = getImgHeight(img) - 1; i >= 0; i--){
        for(int j = 0; j < getImgWidth(img); j++){
            if(!fin.eof()) b = fin.get(); else b = 32;
            if(!fin.eof()) g = fin.get(); else g = 32;
            if(!fin.eof()) r = fin.get(); else r = 32;

            p = {r >= 0 ? r : 32, g >= 0 ? g : 32, b >= 0 ? b : 32};

            writePixel(img, p, i, j);
        }
    }
    printImg(img, os);
    fin.close();
    delete img;
}