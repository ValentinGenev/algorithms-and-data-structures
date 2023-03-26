 #! /bin/sh

filesToBuild=(
    'main.c'
    'integer/sort.c'
    'integer/search.c'
    'string/hash-table.c'
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