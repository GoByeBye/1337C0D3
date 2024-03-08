#!/bin/bash


request_input() {
    echo "What's the number of the new task? e.g 217"
    read -r task_number
    echo "What's the title of the new task? e.g 'Contains Duplicate'"
    read -r task_title
}


create_file() {
    # cleanup the task number and title into one string and lowercase it along with using _ instead of spaces
    task_title=$(echo "$task_title" | tr '[:upper:]' '[:lower:]' | tr ' ' '_')
    new_folder="${task_number}_${task_title}"
    mkdir -p ../${task_number}_${task_title}
    echo "Created directory" 
    cp ../templating/README.md ../$new_folder/README.md
    echo "Created README.md"

    # Replace the task number and title in the file
    sed -i "s/TASK_NUMBER/${task_number}/g" ../$new_folder/README.md
    sed -i "s/TASK_TITLE/${task_title}/g" ../$new_folder/README.md

    touch ../$new_folder/solution.py
    echo "Created solution.py"
}

main() {
    request_input
    create_file
}

main
