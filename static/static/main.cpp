#include <iostream>

//extern keyword is gonna look into external transalational unit for 'variable'
extern int variable;

void SomeFuncion(){

}

struct Entity{
    static int x, y; //by default these variables are public
    //only 1 instance.
    
    static void Print(){ //static method can't access non-static variables
        std::cout<<x<<", "<<y<<std::endl;
    }
};

//need to define those variables
int Entity::x;
int Entity::y;

void Function(){
    int i = 0;
    i++;
    std::cout<<i<<std::endl;
}

int main(int argc, const char * argv[]) {
    Function();
    Function();
    Function();
    Entity::x = 34; //right way to initialize static variables
    Entity::y = 23;
    Entity::Print(); //right way to call static method
        //std::cout<<variable <<std::endl;
    return 0;
}
