#!/bin/bash

while true;
do
    read -r -p "Are you sure? [y/N]: " response   
    if [[ $response =~ ^([yY][eE][sS]|[yY])$ ]]
    then
        echo "You chose yes"
    else
        echo "You chose no"
        exit 0
    fi
done