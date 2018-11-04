#include<iostream>
using namespace std;

void Double (int a[] , int Size)
{
    int i , sum=0;
    for (i=0;i<Size;i++)
    {
        a[i] = 2*a[i];
    }

}

int main()
{
    int a[] = {1,2,3,4,5};
    int Size = sizeof(a)/sizeof(a[0]);
    int i=0;
     Double(a,Size);
    for (;i<Size;i++)
    {
        cout << a[i] << "   ";
    }
    return 0;
}
