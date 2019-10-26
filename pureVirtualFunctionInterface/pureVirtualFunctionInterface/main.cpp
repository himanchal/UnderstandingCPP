#include <iostream>
//this class will behave like an interface as having a pure virtual function
//there is no interface keyword in c++ like other languages C#, Java
class Printable{
public:
    virtual std:: string GetClassName() = 0;
};

class Entity : public Printable{
public:
    //pure virtual function
    //virtual std::string GetName()= 0; //will force the subclasses to implement this function
    std::string GetClassName() { return "Entity"; }
};

class Player : public Entity{
private:
    std::string _name;
public:
    Player(const std::string& name) : _name(name){}
    std::string GetName() { return _name; }
    std::string GetClassName() { return "Player"; }
};

//same way we can have more classes
class A : public Printable{
public:
    std::string GetClassName() override{ return "A";}
};
void Print(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}

int main(int argc, const char * argv[]) {
    Entity* e = new Entity();
    Player* p = new Player("Ronaldhino");
    Print(e);
    Print(p);
    Print(new A());
    return 0;
}
