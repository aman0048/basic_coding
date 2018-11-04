/*#include<iostream>
using namespace std;

 int countingNumber(int a[],int n,int x)
{
    int Count = 0;
 for(int i = 0; i < n; i++)
 {
     if(a[i] == x)
     {
         Count++;
     }
     else if(a[i]> x)
     {
         break;
     }
 }
 return Count;
}
int main()
{
    int a[] = {1,3,6,6,9,4,7,6,8};
    int n = sizeof(a)/sizeof(a[0]);
    //cout << n;
    int x;

    cout << "enter the number you want to count" << endl;
    cin >> x;
     cout << "no of counted : " << countingNumber(a,n,x);
}


// time complexity of this program is o(n) - worst case


*/




#include<iostream>
using namespace std;
// for first occurrence of 5
int binarySearch(int a[] , int n , int x , bool searchFlag)
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
            if(searchFlag)
                high = mid-1;   // for last occurrence low = mid +1;
            else
                low = mid +1;
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
     int arr[] = {2,2,5,5,5,6,7,8};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int x;

    cout << "enter the number you want to search" << endl;
    cin >> x;

    cout << "\n";
    int firstIndex = binarySearch(arr,n,x,true);

    if(firstIndex == -1)
    {
        cout <<"count of " << x << " is "<< 0;
    }
    else
    {
        int lastIndex = binarySearch(arr,n,x,false);
        cout <<"count of " << x << " is " << (lastIndex - firstIndex + 1);
    }
    return 0;
}
