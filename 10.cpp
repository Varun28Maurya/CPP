#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=(sizeof(arr)/sizeof(int));
    
    for(int st=0;st<n;st++)
    {
        for(int end=st;end<n;end++)
        {
            for(int i=st;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
cout<<endl;

int MS=INT8_MIN;
for(int st=0;st<n;st++)
    {
        int CS=0;
        for(int end=st;end<n;end++)
        {
            CS+=arr[end];
            MS=max(CS,MS);
        }
    }
    cout<<"Maximum Sub Array is "<<MS;

    cout<<endl;
    //Kadane's Algorithm 
    int k[8]={1,-5,-3,4,9,-11,7,-6};
    int kn=(sizeof(k)/sizeof(int));
    int kc=0;
    int km=0;


    for(int i=0;i<kn;i++)
    {
        kc+=k[i];
        km=max(kc,km);
        if(kc<0)
        {
            kc=0;
        }
    }
    cout<<km;
    return 0;
}