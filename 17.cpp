#include<iostream>
#include<vector>
using namespace std;

//Binary Search using Recursion
//O(log n)

int BinarySearch(vector<int>& arr, int target, int st, int end)
{
    if(st > end)
        return -1;

    int mid = st + (end - st) / 2;

    if(target > arr[mid])
        return BinarySearch(arr, target, mid + 1, end);

    else if(target < arr[mid])
        return BinarySearch(arr, target, st, mid - 1);

    else
        return mid;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 5, 7};
    int target = 7;

    int ans = BinarySearch(arr, target, 0, arr.size() - 1);

    if(ans != -1)
        cout << "Target found at index " << ans;
    else
        cout << "Target not found";
}




/*
O(log n)


#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {-1, 0, 3, 5, 7};
    int target = 7;

    int n = sizeof(arr) / sizeof(int);

    int st = 0, end = n - 1;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(target > arr[mid])
        {
            st = mid + 1;
        }
        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << "Target found at index " << mid;
            break;
        }
    }

    return 0;
}
*/