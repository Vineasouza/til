#!/bin/bash

declare -r STEPS=('step1' 'step2' 'step3' 'step4' 'step5' 'step6' 'step7' 'step8' 'step9' 'step10')
# calculate the arrray length 
declare -r MAX_STEPS=${#STEPS[@]}
# max bar size at 100%
declare -r BAR_SIZE="##################################################"
# calculate the length of string
declare -r MAX_BAR_SIZE=${#BAR_SIZE}

# hide cursor
tput civis -- invisible

for step in "${!STEPS[@]}"; do
    # calculate the current loop percent 
    perc=$(((step + 1) * 100 / MAX_STEPS))
    # calculate the last bar characters at percentage
    percBar=$((perc * MAX_BAR_SIZE / 100))

    sleep 1

    # show the current loop percent
    # flag -n keep the pointer on the same line
    # flag -e return the pointer at the beginning of the line
    echo -ne "\\r [${BAR_SIZE:0:percBar}] $perc %"
done

echo ""

# back the cursor
tput cnorm -- inormal