//smart pointers -- a new feature 

//new - allocates a new memory on heap
//delete - makes that memory free
//smart pointeres are a way to automate that process.
//they are wrapper around a real world pointer

//are used to manage memory. lot of developer write smart pointers when they want to have their own memory management system.


//unique pointer is a scoped pointer, it has to be unique, you can't copy it
#include <iostream>
#include <memory> //for smart pointers

class Entity
{
public:
    Entity()
    {
        std::cout << "Entity created!" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Entity Destoyed!" << std::endl;
    }
    void Print(){}
};

#include <iostream>

int main(int argc, const char * argv[]) {
    {
        //unique pointer
        std::unique_ptr<Entity> entity(new Entity());
        std::unique_ptr<Entity> e = std::make_unique<Entity>(); //preferred way to handle exception safety
        //std::unique_ptr<Entity> e0 = e; //can't copy this
        e->Print();
        
        //shared pointer works on the basis of reference counting and when reference count reaches at 0 then it gets deleted.
        
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        std::shared_ptr<Entity> se2 = sharedEntity; //you can copy it.
        
        
        //weak pointer -> won't increase the ref count
        std::weak_ptr<Entity> weakEntity = sharedEntity; // it won't keep it alive
        
    }
    return 0;
}
