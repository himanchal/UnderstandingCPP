
#include <iostream>

class Entity
{
private:
    std::string _name;
public:
    Entity(): _name("Unknown"){}
    Entity(const std::string& name): _name(name) {}
    const std::string& GetName() const { return _name; }
};

void Function()
{
    int a =2;
    //below is stack based memory allocation and
    //will destroyed after the scope of this function
    Entity e3 = Entity("anotherName");
    //stack frame gets destroyed after the scope
}

int main(int argc, const char * argv[]) {
    //Entity entity; //calling default constructor(should be written manually);
    
    //std::cout << entity.GetName() <<std::endl;
    
    //Entity e2("SomeName"); //parameterized constructor
    //std::cout << e2.GetName() << std::endl;
    
    //stack
    Entity* e_ptr;
    {// this is a scope
        Entity enttity("NameWithInthescope");
        e_ptr = &enttity;
    }
    
    //heap
    Entity* e2;
    {
        Entity* ent = new Entity("NameForHeap");
        e2 = ent;
        //delete ent;
    }
    malloc(45);
    return 0;
}
