#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int> vec;
    //vector<int> vec={1,2,3,4,5};
    vector<int> vec;

    cout<<"Size of = "<<vec.size()<<endl;
    vec.push_back(5);
    vec.push_back(15);
    vec.push_back(25);
    vec.push_back(35);

    vec.pop_back();

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    cout<<vec.at(2)<<endl;

    //For Each loop
    for(int i:vec){
        cout<<i<<endl;
    }


    cout<<"Size of = "<<vec.size()<<endl;
    cout<<"Size of = "<<vec.capacity()<<endl;//Capacity gets double everytime

    int arr[5]={1,1,2,2,4};
    int ans=0;

    for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        ans^=arr[i];
    }

    cout<<ans;
    return 0;
}