#include <iostream>
using namespace std;


// Pass by Reference
// IT can be done using pointer and reference

// Pointer
void changeAP(int *x)
{
    *x = 20; // Change the value of the variable pointed to by x
}

// Reference
void changeAR(int &x) // alias
{
    x = 20; // Change the value of the variable referenced by x
}

int main()
{
    // POINTERS
    // A pointer is a variable that stores the ADDRESS of another variable.

    int a = 10; // Normal integer variable

    int *ptr = &a; // '&a' means "address of a"
                   // ptr stores the address of a

    // Example memory layout (imaginary addresses):
    //
    // Variable    Address    Value
    // a           1000       10
    // ptr         2000       1000
    //
    // ptr contains the address of a

    cout << &a << endl; // Prints address of a
                        // Output: 1000

    cout << ptr << endl; // Prints value stored in ptr
                         // ptr stores address of a
                         // Output: 1000

    cout << &ptr << endl; // Prints address of ptr itself
                          // Output: 2000

    // POINTER TO POINTER
    // ptr2 stores the address of ptr

    int **ptr2 = &ptr;

    // Updated memory layout:
    //
    // Variable    Address    Value
    // a           1000       10
    // ptr         2000       1000
    // ptr2        3000       2000
    //
    // ptr2 ---> ptr ---> a
    //            |        |
    //          1000      10

    cout << &ptr << endl; // Address of ptr
                          // Output: 2000

    cout << ptr2 << endl; // Value stored in ptr2
                          // ptr2 stores address of ptr
                          // Output: 2000

    cout << &ptr2 << endl; // Address of ptr2 itself
                           // Output: 3000

    cout << *ptr2 << endl; // Dereference ptr2 once
                           // *ptr2 = ptr
                           // Output: 1000

    cout << **ptr2 << endl; // Dereference twice
                            // **ptr2 = value of a
                            // Output: 10

    cout << *(&a) << endl;

    int **pi;
    cout << pi << endl;
    int *p = NULL; // Pointer initialized to NULL
    cout << p << endl;

    int b=10;
    //changeAP(&b);
    changeAR(b);
    cout << b << endl; // Output: 20 (changed)

    //Array pointers
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<*arr<<endl;
    //increament or decreament of pointer means it takes the size of the data type into account
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    
    int point=10;
    int* ptr1=&point;
    cout << ptr1 << endl;
ptr1--;
cout << ptr1 << endl;
ptr1=ptr1+2;
cout << ptr1 << endl;

//Pointer arthimetic

int ab[]={1,2,3,4,5};
int* pointer=ab;
cout<<*pointer<<endl;
pointer++;
cout<<*pointer<<endl;
cout<<*(pointer+2)<<endl;
pointer=pointer+2;
cout<<*(pointer-1)<<endl;
    return 0;
}

