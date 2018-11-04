#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int x)
{
    for (int i=0 ; i < n; i++)
    {
        if(arr[i] == x)
        {
           return i;
        }
    }
            return -1;
}
int main()
{
    int arr[100];
    int n,x;
    cout << "enter the value of n " << endl;
    cin >> n;
    cout << " enter the elemts " << endl;
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << " enter the value of item to be searched" << endl;
    cin >> x;

    cout << "\n";
   cout << linearSearch(arr,n,x);
    return 0;

}
