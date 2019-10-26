
#include <iostream>

int main(int argc, const char * argv[]) {
    int x = 5 ;
    bool compasrionResult = x == 5;
    if (compasrionResult)
        std::cout << "Programs for control statements\n";
    
    const char* ptr = "Hello";
    if (ptr) {
        std::cout<<ptr <<std::endl;
    }
    //else if(ptr == "Hello"){
    else if (strcmp(ptr, "Hello")){
        std::cout<<"ptr is hello";
    }
    int i = 0;
    while (i < 5) {
        std::cout<<"Hello world\n";
        i++;
    }
    //do while loop will execute atleast once
    int j = 0;
    do{
        std::cout<<"Do while loop\n";
        j++;
    }while(j<5);
    
    for (int k = 0; k < 5; k++) {
        if (k % 2 == 0) {
            continue; // skip the even numbers;
        }
        std::cout<<k<<"\n";
        continue; //will not impact anything, because whole work is done.
        break;
    }
    return 0;
}
