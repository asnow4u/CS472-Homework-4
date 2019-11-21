
#include <stdio.h>
#include <math.h>

//Exponent
//pow(x,y) = x^y


int main(int argc, char* argv[]){

  int associativity = argv[0];
  int tag = argv[1];
  int index = argv[2];
  int offset = argv[3];

  int block_size;
  int num_blocks;
  int cacheBits;

  std::cout << argc << std::endl;
  
  //check that the proper number of arguments are present
  if (argc == 4){

    block_size = pow(2, offset);
    num_blocks = pow(2, index) * associativity;

  }
}
