#include<iostream>
using namespace std;


void swappingnumber(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reversearray(int array[],int sizee){
    int start=0, end=sizee-1;
    while(start<end){
        //swap(array[start],array[end]);
        swappingnumber(array[start],end[array]);
        start++;
        end--;

    }

}

int main(){
    int marks[5]={90,44,54,34,56};
    //int marks[]={90,44,54,34,56};
    marks[0]=101;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    int size=sizeof(marks);//how much memory it holds 
    cout<<size<<endl;
    int sizeofarray=sizeof(marks)/sizeof(int);
    cout<<sizeofarray<<endl;
    
    int smallest = marks[0];
for(int i = 1; i < sizeofarray; i++)
{
    if(marks[i] < smallest)
    {
        smallest = marks[i];
    }
    //smallest=min(marks[i],smallest);
}
cout << smallest << endl;

int largest = marks[0];
for(int i = 1; i < sizeofarray; i++)
{
    if(marks[i] > largest)
    {
        largest = marks[i];
    }
    //largest=max(marks[i],largest);
}
cout << largest << endl;

//Linear Search
int arr[7]={10,20,30,40,50,60,70};
int target=70;
for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
{
    if(arr[i]==target)
    {
        cout<<"The Target element is "<<i+1;
    }
}


cout<<"Reverese of Array"<<endl;
int array[5]={1,2,3,4,5};
int sizee=5;
reversearray(array,sizee);
for(int i=0;i<sizee;i++)
{
    cout<<array[i]<<endl;
}

//multiply all the elements in the array
int mult=array[0];
for(int i=1;i<sizee;i++){
    mult=mult*array[i];
}
cout<<mult<<endl;

//Printing all unique values in array
int a[5]={1,2,1,3,2};
for(int i=0;i<(sizeof(a)/sizeof(int));i++)
{
    bool isDistinct = true;

    for (int j = 0; j < i; j++) {
        if (a[i] == a[j]) {
            isDistinct = false;
            break;
        }
    }

    if (isDistinct) {
        cout << a[i] << " ";
    }
}


for (int i = 0; i < (sizeof(a) / sizeof(int)); i++) {
    int count = 0;

    for (int j = 0; j < (sizeof(a) / sizeof(int)); j++) {
        if (a[i] == a[j]) {
            count++;
        }
    }

    if (count == 1) {
        cout << a[i] << " ";
    }
}
    return 0;
}

