
#include <iostream>
#include <string>

class Example
{
public:
    Example()
    {
        std::cout << "Created entity" << std::endl;
    }
    Example(int x)
    {
        std::cout << "Created entity with " << x << std::endl;
    }
};

class Entity
{
private:
    std::string m_Name;
    int x, y, z;
    Example ex;
public:
    Entity() //putting all the initiliazations in one line
        :ex(8)
    //best apporach
    {
        m_Name = "Unknown";
        //ex = Example(8);
        //only parameterised contructor is called by default constructor also called by default
        //ended up creating 2 entities
        
    }
    Entity(const std:: string& name)
    {
        m_Name = name;
    }
    const std::string& GetName() const { return m_Name; }
    
};

int main(int argc, const char * argv[]) {
    Entity e0;
    return 0;
}
