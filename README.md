# Assignment 1

# Bertrand's Paradox

This algorithm estimates the probability of a randomly generated chord in a circle being greater than its half, employing three different strategies: random chord length, random chord endpoint, and random radius. The probability of a chord being greater than its half is calculated for each strategy.

## Files

* 'Assign1.c++': This file contains the C++ implementation of the algorithm.                                                                  
* 'README.md': This README file provides an overview of the algorithm, instructions for running the code, and explanations of the strategies employed.

### Prerequisites

To run the code, you need to have the following tools installed:

* A C++ compiler (such as g++)
  After installing all this tools we may proceed

### Instructions
1) Compilation : Compile the C++ code using a C++ compiler such as g++.

             g++ Assign1.c++ -o Assign1                                                                                        
4) Execution : Run the compiled executable    
       
            ./Assign1
            
### Algorithm Details
1) Setup:
* Define a circle with a radius of 1 unit.
* Randomly generate chords within the circle using three different strategies: random chord length, random chord endpoint, and random radius.

2) Random Chord Length Strategy:

* Generate random chord lengths uniformly distributed between 0 and 1.
* Calculate the probability of a chord being greater than its half.
                                                                                         
3) Random Chord Endpoint Strategy:

* Generate random chord endpoints by selecting angles uniformly between 0 and 2π and then calculating the corresponding x-coordinate using cosine function.
* Calculate the probability of a chord being greater than its half.
                                                     
4) Random Radius Strategy:

* Generate random radii uniformly distributed between 0 and 1.
* Calculate the probability of a chord being greater than its half.

### Results

* The algorithm estimates the probability of a chord being greater than its half using three different strategies: random chord length, random chord endpoint, and random radius.
* The estimated probabilities are printed to the console.
     
## Acknowledgments
The project uses the following libraries
* The C++ Standard Library, which provides a wide range of libraries and algorithms for working with C++ code.

### Contributors
* Amruta
* Deekshitha
* Pavani Priya
* Jaswanth


