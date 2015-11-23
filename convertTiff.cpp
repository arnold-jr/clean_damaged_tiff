#include <iostream>
#include <climits>
#include <string>
#include <vector>
#include <iterator>
#include <fstream> // ifstream, ofstream
#include <sstream> // istringstream
#include <cmath> // pow

#include "tiffio.h" // 
#include "CImg.h"

typedef unsigned char uchar;
typedef unsigned short ushrt;
typedef unsigned int uint;

using namespace cimg_library;
using namespace std;


int main(int argc, char* argv[]) 
{
    if (argc!=2) {
        cout << "Usage: convertTiff <fileToConvert.tif>\n";
        return 1;
    }
    string inName = argv[1];

    CImg<ushrt> image(inName.c_str());

    image.save_tiff(inName.c_str());
//    image.display();

    return 0;
}

