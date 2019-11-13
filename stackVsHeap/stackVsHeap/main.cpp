#include <iostream>
struct Vector3
{
    float x, y, z;
    Vector3() : x(10), y(11), z(12) {}
};
int main(int argc, const char * argv[])
{
    //stack
    int value = 34;
    int array[5];
    array[0] = 101;
    array[1] = 102;
    array[2] = 103;
    array[3] = 104;
    array[4] = 105;
    Vector3 vector;
    
    //heap
    int* hValue =  new int;
    *hValue = 5;
    int* hArray = new int[5];
    Vector3* hVector = new Vector3();
    return 0;
}
