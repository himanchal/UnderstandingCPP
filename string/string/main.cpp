
#include <iostream>
#include<string>

void PrintString(std::string string)
//this is copying string from the calling method
{
    std::cout << string;
}
 
//to make it faster we should use const ref(&)
void PrintStringUsingRef(const std::string& string)
{
    //below statement is illegal becaues of const keyword
    //string += 'h';
}
int main(int argc, const char * argv[]) {
    
    
    std::cout << "how string works in C++\n";
    const wchar_t* name2 = L"wchar"; //wide string
    const char16_t* name3 = u"char16";
    const char32_t* name4 = U"char32";
    const char* ignoreSpecialChar = R"(Line1
    line2
    line3)";
    
    //string lierals are always stored in Read only memory
    //C style way of defining string
    const char* name = "Macbook"; //not a heap allocation
    char macb[6] = {'M', 'a', 'c', 'b'};
    //4D 61 63 62 6F 6F 6B 00 // in memeory
    //00 identification for termination
    
    std::cout << name2;
    
    //c++ standard library 'string', template specialization
    std::string cstring = "C++ string";
    
    std::cout << name3;
    bool contains = cstring.find("str") !=  std::string::npos;
    //no contains method
    std::cout << contains;
    
    //passing the string to another functions

}
