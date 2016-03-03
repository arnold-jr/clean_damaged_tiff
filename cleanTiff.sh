#!/bin/bash
# convertTiff executable must be present on path
rootName=$1
for i in *$rootName.tif; 
do 
    echo $i" is being cleaned"
    convertTiff $i
done 
