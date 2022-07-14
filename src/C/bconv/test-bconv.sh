#!/bin/bash

COMMAND_NOMINAL=(
    "./bconv -b 00"
    "./bconv -b 1011"
    "./bconv -o 70"
    "./bconv -d 32"
    "./bconv -h AF"
)

RESULE_NOMINAL=(
    # "0 0 0 0"
    # "1011 13 11 c"
    # "111000 70 56 38"
    # "100000 40 32 20"
    # "10101111 257 175 AF"
    "binary: 0 octal: 0 decimal: 0 hexadecimal: 0"
    "binary: 1011 octal: 13 decimal: 11 hexadecimal: B"
    "binary: 111000 octal: 70 decimal: 56 hexadecimal: 38"
    "binary: 100000 octal: 40 decimal: 32 hexadecimal: 20"
    "binary: 10101111 octal: 257 decimal: 175 hexadecimal: AF"
)

for i in `seq 0 4`; do
    RESULT=`eval ${COMMAND_NOMINAL[i]}`
    # echo ${RESULT}
    # echo ${RESULE_NOMINAL[i]}
    if [ "`echo ${RESULT}`" = "${RESULE_NOMINAL[i]}" ]; then
        echo "CASE${i}: PASS"
    else
        echo "CASE${i}: FAILURE"
    fi
done
