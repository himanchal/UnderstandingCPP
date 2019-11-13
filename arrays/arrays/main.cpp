
#include <iostream>

class Entity{
public:
    int example[5];
    Entity(){
        for (int i = 0; i < 5; i++) {
            example[i] = 11;
        }
    }
};

int main(int argc, const char * argv[]) {
    Entity e;
    int example[5]; //stored on stack
    for (int i = 0; i < 5; i++) {
        example[i] = 23;
    }
    int* another = new int[5]; //created on heap
    //this pointer points to another location in the memory
    for (int i = 0; i < 5; i++) {
        another[i] = 23;
    }
    delete [] another; //manually deleted
    int* ptr = example; //it is just an integer pointer in the memory
    *(ptr + 2) = 5; //same as above line
    //change
    return 0;
}
