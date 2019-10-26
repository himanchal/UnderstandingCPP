
#include <iostream>

int main(int argc, const char * argv[]) {
    int example[5]; //stored on stack
    for (int i = 0; i < 5; i++) {
        example[i] = 23;
    }
    
    int* another = new int[5]; //created on heap
    for (int i = 0; i < 5; i++) {
        another[i] = 23;
    }
    delete [] another;
    
    int* ptr = example; //it is just an integer pointer in the memory
    *(ptr + 2) = 5; //same as above line
    
    //change
    return 0;
}
