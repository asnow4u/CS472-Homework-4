/*****************************
 *Name: Andrew Snow
 *Class: CS472
 *Assignment 4
 * **************************/

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <math.h>

//Exponent
//pow(x,y) = x^y


int main(int argc, char* argv[]){

  int associativity;
  int tag;
  int index;
  int offset;

  int block_size;
  int num_blocks;
  int cache_bits;
    
  //check that the proper number of arguments are present
  if (argc == 5){
    
    associativity = atoi(argv[1]);
    tag = atoi(argv[2]);
    index = atoi(argv[3]);
    offset = atoi(argv[4]);

    block_size = pow(2, offset);
    num_blocks = pow(2, index) * associativity;
    cache_bits = (1 + tag + block_size * pow(2, index)) * num_blocks;

    std::cout << std::endl;
    std::cout << "Each block requires " << block_size << " bytes." << std::endl;
    std::cout << "This cache can hold up to " << num_blocks << " blocks." << std::endl;
    std::cout << cache_bits << " bits of storage would be required to implement this cache." << std::endl;
    std::cout << std::endl;

  } else {
    
    std::cerr << "Wrong number of arguments" << std::endl;
  }
}
