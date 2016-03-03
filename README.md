#Prerequisites:
Install libtiff library from [here](http://download.osgeo.org/libtiff/)
If installed correctly, the tiffio.h file should be present in 
```/usr/local/bin ```

Download CImg library from [here](http://cimg.eu/download.shtml)
```bash
sudo cp <CImg-folder>/CImg.h /usr/local/include/.
```

#Installation:
To compile convertTiff:
```bash
cd /path/to/convertTIFF/
make mymacosx
sudo cp convertTiff /usr/local/bin/.
```

To check correct compilation, make a copy of the test image and convert it:
```bash
cp testImage/Al-K.tif .
convertTiff Al-K.tif
```

To install bash script:
```bash
chmod +x cleanTiff.sh
sudo cp cleanTiff.sh /usr/local/bin/.
```

To use, cd to the directory with the offending TIFF, which
must have .tif extension. 
```bash
cd /path/to/dirty/tiffs
```

To clean all TIFFs:
```bash
cleanTiff.sh
```

To clean the specific TIFF ```anyTiffFile.tif```:
```bash
cleanTiff.sh anyTiffFile
```

To clean all tiffs matching a pattern, e.g. ``anyTiff_E-KA.tif```
```bash
cleanTiff.sh _E-KA
```

##Troubleshooting:
If you see an error message like ```bin/bash^M```, you should do the 
following:
```bash
vi cleanTiff.sh
```
```vim
:set fileformat=unix
:wq
```
This changes the line-endings to be unix type.
