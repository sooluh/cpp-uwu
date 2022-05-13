#!/bin/bash

printf ">> Clean binary file"

find ./* -type f \
  -not -path "./node_modules/*" \
  -exec sh \
  -c "file -i '{}' | grep -q 'charset=binary'" \
  \; -print | xargs rm -f

for file in $(find ./ -name '*.cpp'); do
  dir=$(dirname $file)
  name=$(basename -- $file)
  extension="${name##*.}"
  name="${name%.*}"

  output="$dir/$name"

  printf "\n\n>> Currently building file : $file"
  g++ $file -o $output
  printf "\n>> Successfully build : $output"
done

printf "\n"
