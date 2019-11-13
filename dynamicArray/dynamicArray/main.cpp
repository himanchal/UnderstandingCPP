//vector class - it's not mathematical class - it' like array list
//you don't set the size, you create a Vector(dynamic array) and push the elements
//how it works - when you exceed the size, it creates a new array and copy the elements to it and deletes the older one
//it's not considered for the best practices
#include <iostream>
#include <vector>
struct Vertex
{
    float x, y, z;
    //knowing your environment is the most important thing for optimization
    //we are optimizing here for copying
    Vertex(float x, float y, float z) : x(x), y(y), z(z) {}
    
    //to keep track of copying things...let's write a copy constructor
    Vertex(const Vertex& vertex)
        :x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied" << std::endl;
    }
};
//overloading the << operator
std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}
int main(int argc, const char * argv[]) {
    std::vector<Vertex> vertices;
    vertices.push_back(Vertex(1, 2, 3)); //adding element into the Vector(araryList)
    vertices.push_back(Vertex(3, 4, 5));
    vertices.push_back(Vertex(7, 8, 9));
    /*
    above 3 lines creating 6 copies, because one is contructed in Main() and 1 in contructor
     */
    //reserve the size of vertex
    //vertices.reserve(3);
    //vertices.emplace_back(Vertex(10, 11, 12));
    //vertices.emplace_back(Vertex(13, 14, 15));
    //vertices.emplace_back(Vertex(16, 17, 18));
    
    

    //for (int i = 0; i < vertices.size(); i++)
       // std::cout << vertices[i] << std::endl;
    
    //vertices.erase(vertices.begin() + 1);
    //for (Vertex v : vertices) // like foreach loop in c#
        //std::cout << v << std::endl;
    
    return 0;
}
