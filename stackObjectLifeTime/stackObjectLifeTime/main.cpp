
#include <iostream>

class Entity
{
public:
    Entity()
    {
        std::cout  << "Created Entity" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed" << std::endl;
    }
};

//this is typcial situation where scope plays an unexpected role
int* CreateArray()
{
    int array[50];
    return array;
}

//automatic object creation and object deletion can be perfomed using unique/smart pointer

class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
    : m_Ptr(ptr) {}
    
    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};


int main(int argc, const char * argv[]) {
    
    //int* a = CreateArray();
    
    
    {//this is a scope
        //Entity e; //entity created on stack by this line
        //Entity* e1 = new Entity(); //entity created on Heap by this line
        ScopedPtr e = new Entity(); // this uses implicit conversion and will be destroyes after scope becaues e gets allocated on stack and eventually call the destructor which delete the m_Ptr
    }
    
    //this approach is helpful in many examples
    //1. timer (starts and ends for any class instance)
    //2. mutex locking (if you want to lock a function if not called by mutliple threads)
    
    return 0;
}
