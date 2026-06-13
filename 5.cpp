#include<iostream>
using namespace std;

/*void printhello(){
    cout<<"Hello World!";
}*/

void sod(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    cout<<"Sum of digits is:"<<sum;
}
int main(){

    int i;
    cout<<"Enter a number:";
    cin>>i;
    sod(i);

    return 0;
}

/*
#include <iostream>
using namespace std;

// Call by Value
void sumByValue(int a, int b)
{
    cout << "\nInside sumByValue() before change:";
    cout << "\na = " << a << ", b = " << b;

    a = 10;
    b = 20;

    cout << "\nInside sumByValue() after change:";
    cout << "\na = " << a << ", b = " << b;
}

// Call by Reference
void sumByReference(int &a, int &b)
{
    cout << "\nInside sumByReference() before change:";
    cout << "\na = " << a << ", b = " << b;

    a = 10;
    b = 20;

    cout << "\nInside sumByReference() after change:";
    cout << "\na = " << a << ", b = " << b;
}

int main()
{
    int a = 5, b = 4;

    cout << "Initial values in main:";
    cout << "\na = " << a << ", b = " << b;

    // Call by Value
    sumByValue(a, b);

    cout << "\n\nAfter sumByValue() in main:";
    cout << "\na = " << a << ", b = " << b;

    // Call by Reference
    sumByReference(a, b);

    cout << "\n\nAfter sumByReference() in main:";
    cout << "\na = " << a << ", b = " << b;

    return 0;
}
*/