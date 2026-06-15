#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    cout<<endl;

    int num=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }

    for(int i=0;i<5;i++)
    {
        char ch='A'+i;
        for(int j=0;j<i+1;j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }

    for(int i=1;i<5;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }

    //Floyd's Triangle
    int nnum=1;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<nnum;
            nnum++;
        
        }
        cout<<endl;
    }

    cout<<endl;

    int nu = 5;

    for (int i = 0; i < nu; i++)
    {
        // Print i spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print numbers from 0 to (nu-i-1)
        for (int j = 0; j < nu - i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    cout<<endl;

    int a=5;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<(a-i-1);j++)
        {
            cout<<" ";
        }
    
        for(int j=1;j<=i+1;j++)
        {
            cout<<j;
        }

        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout << endl;
    }


     int b = 4;

    // Upper half
    for(int i = 1; i <= b; i++)
    {
        for(int j = 1; j <= b - i; j++)
            cout << " ";

        cout << "*";

        if(i > 1)
        {
            for(int j = 1; j <= 2 * i - 3; j++)
                cout << " ";

            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for(int i = b - 1; i >= 1; i--)
    {
        for(int j = 1; j <= b - i; j++)
            cout << " ";

        cout << "*";

        if(i > 1)
        {
            for(int j = 1; j <= 2 * i - 3; j++)
                cout << " ";

            cout << "*";
        }

        cout << endl;
    }
    return 0;
}