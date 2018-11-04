/*#include<bits/stdc++.h>
using namespace std;

// call by reference

int add(int* a, int* b) // called fn
{
    // a and b are pointer to integers local to add
    cout << &a <<endl;
    cout <<"  value in a of add(address of a of main) = " << a << endl;
    cout <<"  value at address stored in a of add = " << *a << endl;
    int z = (*a)+(*b);
    return z;
}
int main()  // calling fun
{
    int a, b,c;
    cin>>a>>b;
    cout << &a <<endl;
    // call by value
    //c = add(a,b); // value in a is copied to a of add
                    // value in b is copied to b of add
c=add(&a,&b);

    cout <<"the sum is " << c << endl;

    // if we want to verify the value we can check address
}

*/

#include<iostream>
#include<cstdlib>
using namespace std;

void printHelloWorld()
{
    cout << " hello world " << endl;
}
int* add(int* a, int* b) // called fun - returns pointer to integer
{
    int *z = (int*)malloc(sizeof(int));
    //int z = (*a)+(*b);
     *z = (*a)+(*b);
    return z;
}
int main()  // calling fun
{
    int a, b;
    cin>>a>>b;
    int *c = add(&a,&b);

    printHelloWorld();
    cout <<" the sum is " << *c << endl;

   return 0;
}

