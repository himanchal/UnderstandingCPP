#include <iostream>

#define LOG(x) std::cout << x << std:: endl
//call by value
void Increament(int* value){
    //*value++; //this is will increase the address
    (*value)++; //order of operators matters
}
//call by reference
void IncreamentRef(int& value){
    value++;
}

int main(int argc, const char * argv[]) {
 
    //data that will be residing on that particular address presumed to be that data type.
    //pointers don't have data type
    //point is just a memomry address - int
    int var = 8;
    void* ptr = &var; //we essentianlly asking - hey, what is your memory address
    //0 is not a valid memory address
    int* ptr1 = &var;
    double* ptr2 = (double*)&var;
    //*ptr = 10; can't assign value to void pointer
    *ptr1 = 10;
    LOG(var);
    char* buffer = new char[8];
    memset(buffer, 0, 8);
    //pointer to pointer or double pointer
    char** ptrptr = &buffer;
    
    //references
    int a = 5;
    int& ref = a; //reference variable as alias
    ref = 2;
    LOG(a);
    Increament(&a);
    LOG(a);
    
    int refvar = 12;
    LOG(refvar);
    IncreamentRef(refvar);
    LOG(refvar);
    
    int m = 5;
    int n = 8;
    
    int& refm = m;
    refm = n; //will update the value of m
    LOG(m);
    LOG(n);
    
    int q = 20;
    int r = 30;
    int* refq = &q;
    *refq = 22;
    refq = &r;
    *refq = 1;
    
    LOG(q);
    LOG(r);
    return 0;
}

