//operators are just functions
//add() is +

#include <iostream>

struct Vector2
{
    float x, y;
    Vector2(float x, float y) : x(x), y(y){}
    
    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }
    //
    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }
    
    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(x * other.x, y * other.y);
    }
    Vector2 operator*(const Vector2& other) const
    {
        return Multiply(other);
    }
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << ", " << other.y;
    return stream;
}

int main(int argc, const char * argv[]) {
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerUp(1.1f, 1.1f);
    
    Vector2 result = position.Add(speed);
    
    //if third vectory has to be introduced for power
    Vector2 result2 = position.Add(speed.Multiply(powerUp));
    //above line of code is not that readable
    
    Vector2 result3 = position + speed * powerUp;
    //compiler can't perform addition and multiplication operartion on
    //above 2 vectors. New definition can be given to these operators
    //using opertor overloading
    
    std::cout<< result3 << std::endl;
    
    return 0;
}
