# base number converter (bconv)

## What is bconv?
bconv \- base number converter

## SYNOPSIS
bconv -[b|o|d|h] number

## DESCRIPTION
bconv is command to convert base-N number into other base numbers.

bconv is compatible with Binary number, Octal number, Decimal number, Hexadecimal number.

## USAGE EXAMPLE
```
user@localhost:~/sample$ ./src/bconv -b 110

     binary: 110

      octal: 6

    decimal: 6

hexadecimal: 6
```
```
user@localhost:~/sample$ ./src/bconv -o 320

     binary: 11010000

      octal: 320

    decimal: 208

hexadecimal: D0
```
```
user@localhost:~/sample$ ./src/bconv -h 56

     binary: 1010110

      octal: 126

    decimal: 86

hexadecimal: 56
```
```
user@localhost:~/sample$ ./src/bconv -d 256

     binary: 100000000

      octal: 400

    decimal: 256

hexadecimal: 100
```
