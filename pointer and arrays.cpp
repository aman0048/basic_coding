// element at index i we can retrieve the address of the particular element
// address - &a[i] or (a+i)
// value- a[i] or *(a+i)
 /*
 consider an array a[4]
 int a[4];
 int *p
 p=a;
 print a   it will automatically print the address  of the a[0]
 print *A  it will automatically print  the value of a[0];
 */

 #include<iostream>
 using namespace std;

 int main()

 {

  /*   int a[4] = {1,2,4,6};
     int *p;
     p=a;
     cout << a << "   "  << *a << endl;
     cout << &a[0] << endl;
     cout << a+0 << endl;
     cout << a[0] << endl;
     cout << *(a+0 )<< endl;
*/

int a[] = {2,3,4,5,6};
int i;
int *p= a;
p++;
for(i=0;i<5;i++)
{
    cout << &a[i] << endl;
     cout << a+i << endl;
     cout << a[i] << endl;
     cout << *(a+i )<< endl;
}

     return 0;
 }
