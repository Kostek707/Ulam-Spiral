# Ulam Spiral

The program generates the Ulam Spiral and then stores an image representing it in a picture.ppm. In the image black pixels correspond to primes and white correspond to composite numbers.

## Motivation

I was inspired to create this program by the biography of Stanisław Ulam whom I consider to be one of the most prominent Polish scientists. He participated in the Manhattan project, helped in building a hydrogen bomb, and created one of the first artificial intelligence algorithms used to play chess. His work on Monte Carlo method also contributed to the creation of AlphaGo - the first artificial intelligence capable of winning with human in the game GO. 

The spiral that my program generates is one of Ulam’s most famous works. It graphically shows  that prime numbers are not randomly distributed. 

## Overview

![](https://i.imgur.com/dF9zLYn.jpg)

## Getting started

Below you can find instructions on how to run the program on your computer.

### How to run the program

After downloading files or cloning the repository, compile the main.cpp file with the following command:

```
g++ main.cpp -o spiral
```

Finally, to run the program, use the command:
```
./spiral
```

## How to use?

After launching the program, you only have to input the size of the spiral and then open a file picture.ppm. I recommend sizes between 100 and 4000.