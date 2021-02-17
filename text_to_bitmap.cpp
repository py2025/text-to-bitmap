#include "text_to_bitmap.h";

namespace fs = std::filesystem;

int create_image(Image *img, string file_name) {
    fs::path p {file_name};
    int size = fs::file_size(p);
    int leg = sqrt(size) + 0.5;
    image_init(img, leg, leg);
    Image_fill(img, Pixel{0, 0, 0});
    return leg;
}

void text_conversion(string file_name, ostream& os) {
    Image *img = new Image; 
    ifstream fin; 
    fin.open(file_name); 
    int size = create_image(img, file_name);
    int r, g, b;
    while(fin >> r){
        if(!fin.eof()) fin >> g;
        else 0 >> g;
        if(!fin.eof()) fin >> b;
        else 0 >> b;
    }
    printImg(img, os);
    fin.close();
}