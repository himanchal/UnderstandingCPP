//'this' is the pointer to the current object instance

#include <iostream>
#include <string>

//void PrintEntity(Entity* e);

class Entity
{
public:
    int x, y;
    Entity(int x, int y)
    {
        x = x; //this doesn't make any sense
        y = y;
        
        this->x = x;
        this->y = y;
        
        //or
        Entity* e = this; //Entity type pointer
        e->x = x;
        e->y = y;
        //can pass the current instance of class using 'this' keyword
        //PrintEntity(this);
        delete this; //avoid using this
    }
    
    int GetX() const //by using const keyword here we are not allowed to modify the class
    {
        const Entity* e = this;
        return x;
    }
};

void PrintEntity(Entity* e)
{
    //some printing job
}

int main(int argc, const char * argv[]) {

    return 0;
}
