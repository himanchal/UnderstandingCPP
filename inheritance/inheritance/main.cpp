#include <iostream>

class Entity{
public:
    float _x, _y;
    void Move(int x, int y){
        _x += x;
        _y += y;
    }
};

class Player : public Entity{
public:
    void PrintName(const char* _name){
        std::cout << _name << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    Player player;
    player._x = 12;
    player._y = 23;
    player.Move(12, 23);
    player.PrintName("Safarnama");
    
    return 0;
}
