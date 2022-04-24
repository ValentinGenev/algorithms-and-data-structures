 #! /bin/sh

filesToBuild=('main.c' 'basics/numbers.c')

mkdir -p build
cd build/

for file in ${filesToBuild[@]}
do
    gcc -Wall -c ../$file
done

objectFiles=`find ./ -type f -iname "*.o"`
gcc $objectFiles -o run -lm