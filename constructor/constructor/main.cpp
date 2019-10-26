#include <iostream>
class Entity{
public:
    double X, Y;
    void Print(){
        std::cout << X << ", " << Y << std::endl;
    }
    //constructor will not run if don't instantiate an object
    Entity(){ //values can be initialized
        X = 1.1f;
        Y = 1.2f;
    }
    Entity(float x, float y){
        X = x;
        Y = y;
    }
    //can be called manually also
    ~Entity()//will be called automatically on the deallocation of memory
    {
        std::cout <<"Destroyed" << std::endl;
    }
};
class Log{
private:
    //Log(){} //can prevant object instatiation
    Log() = delete; //another way to prevant instatiation
};
int main(int argc, const char * argv[]) {
    Entity e(12.02f, 23.23f);
    e.Print();
    Entity e1;
    e1.Print();
    e.~Entity();//calling destructor manually
    //Log l;
    return 0;
}
