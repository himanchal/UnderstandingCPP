

#include <iostream>
#include <string>

//explicit keyword disables implicit conversion


class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name) : m_Name(name), m_Age(-1){}
    Entity(int age): m_Name("Unknown"), m_Age(age){}
    
    //explicit Entity(int age): m_Name("Unknown"), m_Age(age){}
};

void PrintEntity(const Entity& entity)
{
    //printitng
}

int main(int argc, const char * argv[]) {
    
    //normal way to create instance
    Entity a("MyName");
    Entity b(23);
    
    //another way
    //Entity c = "MyName";
    Entity d = 34; //implicit conversion
    Entity e = Entity(34); //explicit conversion
    PrintEntity(45); //implicit conversion is happening from int -> Entity
    PrintEntity(Entity("Sometext")); //explicit conversion
    //C++ has to do 2 implicit conversions
    //PrintEntity("SomeString");
    
    PrintEntity(std::string("SomeString"));
    //OR
    PrintEntity(Entity("SomeString"));
    
    return 0;
}
