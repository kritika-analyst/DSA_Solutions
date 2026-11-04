#include <iostream>
#include <vector>
using namespace std;

// Pointer
int main() {
//Memory addresses can be printed with the help of & (ampersand)
        int a = 10;
        cout << &a << endl; // & -used for address operation ,also for bitwise operations
        int* ptr = &a;  // * tells that ptr is a pointer variable
       
        cout << &a << endl;  //memeory addres of a
        cout << ptr << endl; //memory adress of a stored in ptr
        
        cout << &ptr << endl; //memory address of ptr

// Pointer to pointer - storing address of a pointer 
        int** ptr2 = &ptr; //double star means storing address of pointer variable
        cout << ptr2 << endl;
        cout << &ptr << endl;

// derefrencing pointer (*) -value at the address 
        cout << *(&a) << endl;
        cout << *(ptr) << endl; // value of ptr is address of a, so the value of 'a' address is printed
        
        cout << *(&ptr) << endl; // printing address of ptr
        cout << *(ptr2) << endl; // printing address of ptr

        cout << **(ptr2) << endl; // double derefrencing pointer ,value of that address stored in ptr address stored in ptr2
        
        int* b = NULL; // NULL pointer - when no value is stored in pointer variable and can't make derefrencing pointer to it 
        cout << b << endl; 
         
        return 0;
}