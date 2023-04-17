 #! /bin/sh

filesToBuild=(
    'main.c'
    'integer/sort.c'
    'integer/search.c'
    'integer/hash-table.c'
    'string/hash-table.c'
)

rm -rf build
mkdir -p build
cd build/

for file in ${filesToBuild[@]}
do
    echo "compiling $file"

    dir="$(dirname $file)"
    if [ "$dir" == "." ]
    then
        gcc -Wall -c ../$file
    else
        mkdir -p $dir
        cd $dir
        gcc -Wall -c ../../$file
        cd ..
    fi
done

objectFiles=`find ./ -type f -iname "*.o"`
gcc $objectFiles -o run -lm