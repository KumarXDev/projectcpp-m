#include <iostream>
using namespace std;

int main(){

    int x = 10;          // Regular integer variable
    int *ptr = &x;       // Pointer storing the address of 'x'

    std::cout << "Value of x: " << x << std::endl;       // Prints value of x
    std::cout << "Address of x: " << &x << std::endl;    // Prints address of x
    std::cout << "Pointer ptr: " << ptr << std::endl;    // Prints address stored in ptr
    std::cout << "Value at ptr: " << *ptr << std::endl;  // Dereference: Prints value of x
    return 0;
}