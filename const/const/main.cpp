

#include <iostream>

class Entity
{
private:
    int m_X, m_Y;
    mutable int m_debugCount = 0; //mutable keyword will allow to modify the var with const member function
public:
    //getter setter
    int GetX() const //this method will not modify any class data
    {
        m_debugCount++;
        return m_X;
    }
    void SetX(int x)
    {
        m_X = x;
    }
};

void PrintEntity(const Entity& e) //get method has to have const keyword
{
    std::cout << e.GetX() << std::endl;
}

int main(int argc, const char * argv[]) {
    
    
    const int MAX_AGE = 90;
    const int* a = new int; //creating integer on the heap
    //content on on that pointer can't be changed
    
    int* const b = new int;
    //vice versa of above statement
        
    //*a = 2;
    a = (int*)&MAX_AGE;
    
    
    std::cout << *a << std::endl;
    return 0;
}
