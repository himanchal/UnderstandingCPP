//templates - allows you to define a blueprint(template) that will be compiled by your usage
//you can get the cmompiler to write the code for you based on the set of rules.
#include <iostream>
//why
void Print(int value)
{
    std::cout << value << std::endl;
}
//if you want to print a float you need to write a new overload for the same method
void Print(std::string value)
{
    std::cout << value << std::endl;
}
//we can avoid this code duplication using template
template<typename T> // template<class T> both are the same code, typename is preferred to avoid confusion
void PrintCommon(T value) //this is not acutal code, this is only gets created when we actually call it
{
    std::cout << value << std::endl;
}
//templates can be created for class as well
//If want to create an array class on stack
template<typename T, int N>
class Array //this gets compiled based on the usage
{
private:
    T m_Array[N]; //size will be determined at compile time.
    //instead of fixed type int we can make that also template
    
public:
    int GetSize(){return N;}
};

int main(int argc, const char * argv[]) {
    Array<int, 5> array; //this will compile the Array class based on the size - using template<int N>
    std::cout <<"size of array: " << array.GetSize() << std::endl;
    //Print(5);
    //Print(23.23f);
    //Print("John");
    PrintCommon(5);
    PrintCommon<int>(45);
    PrintCommon(23.23f);
    PrintCommon("John");
    return 0;
}

//where you might want to use template
//1 - logging system - you can automate the every single logging system

//where you might not want to use tempate
//1 - if its getting really really complex - generated by compiler then we should avoid them
//2 - debugging can be really really hard.
