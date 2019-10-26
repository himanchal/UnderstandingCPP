
#include <iostream>

int main(int argc, const char * argv[]) {
    int example[5];
    
    for (int i = 0; i < 5; i++) {
        example[i] = 23;
    }
    
    int* ptr = example; //it is just an integer pointer in the memory
    *(ptr + 2) = 5; //same as above line
    
    
    return 0;
}
