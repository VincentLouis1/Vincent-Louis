#!/bin/bash
echo -e "enter text file name:\c"
read "textfile"

echo -e "enter word filename:\c"
read "wordfile"

if [ -z "$textfile" ]
then 
    exit
fi

while read w
 do
    sed -i "s/$w//ig" $textfile  
 done < $wordfile
