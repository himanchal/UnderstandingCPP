

#include <iostream>
#include "glfw3.h"


int main(int argc, const char * argv[]) {
    int a = glfwInit();
    
    std::cout << a << std::endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
