#!/bin/bash

# Specify the range of numbers (6 to 33)
for n in {6..33}; do
    # Define the filename pattern
    filename="Exercises${n}.c"

    # Check if the file already exists
    if [ -e "$filename" ]; then
        echo "File $filename already exists, skipping."
    else
        # Create a new .c file
        touch "$filename"
        echo "Created $filename"
    fi
done

