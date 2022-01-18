#!/bin/bash

printf ">> Clean .exe file"

for file in $(find ./ -name '*.exe'); do
	rm -f $file
done

for file in $(find ./ -name '*.cpp'); do
	dir=$(dirname $file)
	name=$(basename -- $file)
	extension="${name##*.}"
	name="${name%.*}"

	output="$dir/$name.exe"

	printf "\n\n>> Currently building file : $file"
	g++ $file -o $output
	printf "\n>> Successfully build : $output"
done

printf "\n"
