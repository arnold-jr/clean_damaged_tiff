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

/** Converts a malformed tif into proper format with CImg library.*/
int main(int argc, char* argv[]) 
{
    if (argc!=2) {
        cout << "Usage: convertTiff <fileToConvert.tif>\n";
        return 1;
    }
    string inName = argv[1];

    CImg<ushrt> image(inName.c_str());
    
    //string tmpName = "tmp.txt";
    //image.save_ascii(tmpName.c_str());
    //image.save_tiff(tmpName.c_str());
    //image.display();
    //CImg<ushrt> image2(tmpName.c_str());
    
    string outName = inName+"-copy.tif";
    image.save_tiff(outName.c_str(),0,0,0,false);

    return 0;
}

