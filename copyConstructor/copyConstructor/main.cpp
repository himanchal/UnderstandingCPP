//if we want to avoi the copying we use references some timee
#include <iostream>
struct Vector
{
    float x, y;
    
};
//let's write a String class and make them copyable
 
class String
{
private:
    char* m_Buffer;
    unsigned long m_Size;
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer =  new char[m_Size];
        memcpy(m_Buffer, string, m_Size);
    }
    //copy constructor also called deep copy
    String(const String& other):m_Size(other.m_Size) //object initialization list
    {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size);
    }
    ~String()
    {
        delete[] m_Buffer;
    }
    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }
    friend std::ostream& operator<< (std::ostream& stream, const String& string);
};

//overload cout operator
std::ostream& operator<< (std::ostream& stream, const String& string)
{
    stream << string.m_Buffer; //accessing a private member of class using friend keyword
    return stream;
}

int main(int argc, const char * argv[]) {
    
    String first = "John";
    String second = first;
    second[1] = 'a'; //operator overloading is being used.
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    
    Vector a = {23, 23};
    Vector b = a; //values of 'a' is copied to 'b'
    
    b.x = 5;
    
    Vector* a2 = new Vector();
    Vector* b2 = a2; //actual values are not copied, pointer is copied
    b2++;
    
    b2->x = 34; //in this case it will affect both a2 and b2 because they are pointing to the same memory address
    
    return 0;
}
