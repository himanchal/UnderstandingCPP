#include <iostream>

int Multiply(int a, int b){
    return a * b;
}

void Log();

int main(int argc, const char* argv[]) {
    std::cout << "Hello, World!\n";
    int result = Multiply(23, 23);
    std::cout<<"Product = "<<result <<"\n";
    //Log();
    int a = 8;
    a++;
    const char* string = "Hello";
    for (int i = 0; i < 5; i++) {
        const char c = string[i];
        std::cout << c << std::endl;
    }
    return 0;
}


