#include<iostream>
using namespace std;
// for first occurrence of 5
int binarySearch(int a[] , int n , int x)
{
int low = 0;
int high = n-1;
int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(a[mid] == x)
        {
            result = mid;
            high = mid-1;   // for last occurrence low = mid +1;
        }
        else if(x < a[mid])
            {high = mid -1;}
        else
           {
            low = mid +1;
            }
    }
    return result ;
}

int main()
{
     int arr[] = {1,2,2,5,5,5,6,7,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int x;

    cout << "enter the number you want to search" << endl;
    cin >> x;

    cout << "\n";
    cout << " result is: " << binarySearch(arr,n ,x);

    return 0;
}
