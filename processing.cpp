#include "text_to_bitmap.h"

int main(int argc, char* argv[]){
    if(argc != 3){
        cout << "USAGE: processing.exe INPUT_FILE OUTPUT_FILE" << endl;
    }
    ofstream output;
    output.open(argv[2]);
    text_conversion(argv[1], output);
}