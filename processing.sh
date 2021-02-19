#!/bin/sh

# Author : William Chen

# This shell script is for converting books in as txt files
# that are saved to the iofiles folder
# For other files in different locations or of different
# files types, use the following command:
# ./processing.exe INPUT_FILE OUTPUT_FILE

# Ask the user for the file to convert
echo "Text to Bitmap"
echo "What is the name of the file to convert:"
read NAME

# Check if folder with given name exists
# If not create a directory with that name
if test -d iofiles/"$NAME"; then
   echo "Folder $NAME found"
else
   echo "Folder $NAME not found"
   echo "Creating folder $NAME"
   mkdir iofiles/$NAME
fi

# Check if a txt file exists with the given name
# If not, warn the user and end the program
if test -f iofiles/"$NAME"/"$NAME".txt; then
   echo "File $NAME.txt found"
else
   echo "File $NAME.txt not found"
   exit
fi

# Convert the txt file with given name into a bmp
echo "Converting $NAME.txt to $NAME.bmp"
./processing.exe iofiles/$NAME/$NAME.txt iofiles/$NAME/$NAME.ppm
convert iofiles/$NAME/$NAME.ppm iofiles/$NAME/$NAME.bmp
echo "Conversion of $NAME.txt to $NAME.bmp successful"
