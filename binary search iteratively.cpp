#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int x)
{
int low = 0;
int high = n-1;

    while (low <= high)
    {
        int mid = (low+ high)/2; // low + (high - low)/2 (low + high ) can overflow
        if(x == arr[mid])
        return mid;
        else if (x < arr[mid])
            high = mid -1;
        else
            low = mid + 1;
    }

    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int x;

    cout << "enter the number you want to search" << endl;
    cin >> x;

    cout << "\n";
    int result = binarySearch(arr,n ,x);

    (result == -1)? cout<<"element is not found in array " :
        cout << "element is present in array at index " << result << end;

    return 0;
}
