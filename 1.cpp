#include<iostream>
using namespace std;
int main()
{
    cout << "Hello, World!"<<endl;
    cout<<"Welcome to C++ programming."<<endl;
    cout<<"This is a C++ Program \nCompier and IDE are used to run this program."<<endl;

    //Variables
    //8 bits = 1 byte
    //1024 byte = 1KB
    //1024 KB = 1MB
    int a=10; //4 bits
    float b=3.14; //4 bits
    char c='A'; //1 bit
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;

    bool isTrue=true; //1 bit
    double d=3.14159; //8 bits
    cout<<"The value of isTrue is: "<<isTrue<<endl;
    cout<<"The value of d is: "<<d<<endl;


    //Implicit Type Conversion
    char ch='A';
    int num=ch;
    cout<<"The Value of num is:"<<num<<endl;

     //Explicit Type Conversion
    double price=19.99;
    int priceInt=(int)price;
    cout<<"The value of priceInt is: "<<priceInt<<endl;
    

    return 0;
}