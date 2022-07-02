#!/bin/bash

COMMAND_NOMINAL=(
    "./bconv -b 00"
    "./bconv -b 1011"
    "./bconv -o 70"
    "./bconv -d 32"
    "./bconv -h AF"
)

RESULE_NOMINAL=(
    "0 0 0 0"
    "1011 13 11 c"
    "111000 70 56 38"
    "100000 40 32 20"
    "10101111 257 175 AF"
)

for i in "${COMMAND_NOMINAL[@]}"; do
    RESULT=`eval $i`
    for j in "${RESULT[@]}"; do
        echo ${j}
    done
done
