#include <iostream>
using namespace std;
int main()
{
    /*int a;
    cout << "Enter a number:";
    cin >> a;*/
    /*
    if(a>0)
    {
        cout<<"The number is positive.";
    }
    else if(a<0)
    {
        cout<<"The number is negative.";
    }
    else
    {
        cout<<"The number is zero.";
    }
    */
    // Ternary operator
    //(a>0)?cout<<"The number is positive.":(a<0)?cout<<"The number is negative.":cout<<"The number is zero.";
    /*
        char ch;
        cout<<"Enter a character:";
        cin>>ch;
        if(ch>='A' && ch<='Z')
        {
            cout<<"The character is uppercase.";
        }
        else if(ch>='a' && ch<='z')
        {
            cout<<"The character is lowercase.";
        }
        else
        {
            cout<<"The character is not an alphabet.";
        }
        */

    //Loops

    //While Loop
/*
    int i=1;
    while(i<=5)
    {
        cout<<i;
        i++;
    }
        */

    //For Loop
    //for(intialization;condition;increment/decrement)
    for(int i=1;i<=5;i++)
    {
        cout<<i;
    }

    //Do-While Loop
    do
    {
        cout<<"Hello";
    }while(3>5);


    //Nested Loops
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}