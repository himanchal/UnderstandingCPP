//code would be more cleaner if classes are used to organize data
#include <iostream>

//classes - private by default
//struct - public by default
class Player{
public:
    int x, y;
    int speed;
    
    //funcions inside the classes called Methods
    void Move(int xa, int ya){
        x += xa * speed; //will be referring to the current object
        y += ya * speed;
    }
};

int main(int argc, const char * argv[]) {
    Player player; //instantialting object
    player.x = 10;
    player.y = 12;
    player.speed = 23;
    player.Move(1, -1);
    std::cout << "Hello, World!\n";
    return 0;
}
