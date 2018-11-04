#include<iostream>
using namespace std;

int BinarySearchRecursive(int a[],int low,int high,int x)
{
    int mid = low + (high - low)/2;
    if(low > high)
        return -1;
    if (a[mid] == x)
        return mid;
    else if (a[mid] > x)
        BinarySearchRecursive(a,low,mid-1,x);
    else
        BinarySearchRecursive(a,mid+1,high,x);
}
 int main()
 {
     int arr[] = {2,4,7,9,34,67,87};
     int n = sizeof(arr)/sizeof(arr[0]);
     int high =n-1,low=0,x;
     cout << "enter the value of number to searched " <<endl;
     cin >> x;

    int result = BinarySearchRecursive(arr,low,high,x);
     (result == -1)?cout<<"no. not present " : cout <<"no. is present at index " << result << endl;
     return 0;

 }
