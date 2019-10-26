#include <iostream>
enum Colors : char //char can be used to save the memory if requirement is not for long
{
    Red = 100,
    Green,
    Blue,
    Black,
    White
};
int main(int argc, const char * argv[]) {
    std::cout << Colors::Green<<std::endl;
    return 0;
}
