
#include <iostream>

class Entity{
public:
    //virtual function performs dynamic dispactch, which used V-Table
    virtual std::string GetName(){return "Entity";}
};

class Player : public Entity{
private:
    std::string _name;
public:
    Player(const std::string& name) : _name(name){}
    std::string GetName() override{ //override is for better readability, not mandatory
        return _name;
    }
};

int main(int argc, const char * argv[]) {
    Entity* e = new Entity();
    std::cout << e->GetName() << std:: endl;
    
    Player* p = new Player("Messi");
    Entity* q = new Player("Messi"); // in this case GetName() has to marked as virtual in base class
    std::cout << p->GetName() << std:: endl;
    std::cout << q->GetName() << std:: endl;
    return 0;
}
