#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n/2+1;

    //Unary Operators

    int i=5;
    cout<<i++<<endl; //5
    cout<<i--<<endl; //6
    cout<<++i<<endl; //6
    cout<<--i<<endl; //5

    //Operators
    //Arithemetic Operators
    int a=10,b=20;
    cout<<a+b<<endl; //30   
    cout<<a-b<<endl; //-10
    cout<<a*b<<endl; //200
    cout<<a/b<<endl; //0
    cout<<a%b<<endl; //10

    //Relational Operators
    cout<<(a==b)<<endl; //0
    cout<<(a!=b)<<endl; //1
    cout<<(a>b)<<endl; //0
    cout<<(a<b)<<endl; //1
    //Logical Operators
    cout<<(a>5 && b>15)<<endl; //1
    cout<<(a>5 || b<15)<<endl; //1
    cout<<!(a>5)<<endl; //0

    //Bitwise Operators
    cout<<(a&b)<<endl; //0
    cout<<(a|b)<<endl; //30
    cout<<(a^b)<<endl; //30
    //Assignment Operators
    a+=5; //a=a+5
    cout<<a<<endl; //15
    //Ternary Operator
    int max=(a>b)?a:b;
    cout<<max<<endl; //20
    
    return 0;
}