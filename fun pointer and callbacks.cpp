#include<iostream>
#include<cstdlib>

using namespace std;

/*void A()
{
    cout << " hello " << endl;
}
void B(void (*ptr)()) // fun pointer as argument
{
     ptr();  // call - back function that "ptr " points to

}

int main()
{
    B(A);  // A is call back function

    void (*p)() = A;
    B(p);
}




// callback funtion should compare two integers, should return 1 if fist element has higher rank,
//0 if elements are equal and -1 if second element has higher rank

 int compare (int a , int b)
 {
     if(a>b)return -1;
     else return 1;
 }

 int absolutecompare (int a , int b)
 {
     if(abs(a) > abs (b))return 1;
     else return -1;
 }

void bubbleSort(int a[] , int n , int (*compare)(int,int))
{
    for (int i =0; i<n; i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(absolutecompare (a[j],a[j+1]) > 0)
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[100]= {-31,22,-1,50,-6,4}; // {-1,4,-6,22,-31,50}
    int n = 6;
    bubbleSort(a,n,absolutecompare);
    for (int i=0;i<6;i++)
    {
        cout<< "  " << a[i];
    }
 return 0;
}



*/

#include<iostream>
#include<cstdlib>
#include<math.h>

int compare (const void *a ,const void *b)
{
    int A = *((int*)a);// first will typecast and then dereference t get value
    int B = *((int*)b);
        return A-B;
}
int main()
{
    in t a[]= {-31,22,-1,50,-6,4}; // {-1,4,-6,22,-31,50}

    qsort(a,6,sizeof(int),compare);
    for (int i=0;i<6;i++)
        {
            cout<< "  " << a[i];
        }
 return 0;

}
