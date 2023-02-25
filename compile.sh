 #! /bin/sh

filesToBuild=(
    'main.c'
    'basic-algorithms/collection.c'
    'basic-algorithms/sort.c'
    'basic-algorithms/search.c'
)

rm -rf build
mkdir -p build
cd build/

for file in ${filesToBuild[@]}
do
    echo "compiling $file"
    gcc -Wall -c ../$file
done

objectFiles=`find ./ -type f -iname "*.o"`
gcc $objectFiles -o run -lm