/*#include<iostream>
#include<cstdlib>
using namespace std;

int adding(int a, int b)
{
    return a+b;
}
int main()
{
    int c;

    int *func(int,int) // declaring a function that would return int*
    int (*funct)(int,int) // declaring a function pointer

    int (*p)(int,int); //declaration of fun pointer

    // int *p(int,int);  if we not use parenthesis a fun that return pointer to integer

    // pointer to fun that should take
    //(int,int) as arguments/parameter and return int
    p= &adding; // fill in the address of adding fun in p

    // p = adding // we can use adding fun directly not using &
    //functon name will return us pointer

    c= (*p)(2,3);

    // we can directly use p(2,3);

    // we have first dereference the p to get function
    cout << c <<endl;
}






#include<iostream>
#include<cstdlib>
using namespace std;

void printhello()
{
    cout << "hello" <<endl;
}
int add (int a, int b)
{
    return a+b;
}

int main()
{
    void (*ptr)();
    ptr = printhello;
    ptr();
}


*/


#include<iostream>
#include<cstdlib>
using namespace std;

void printhello(char *name)
{
    cout << "hello" << name <<endl;
}
int add (int a, int b)
{
    return a+b;
}

int main()
{
    void (*ptr)(char*);
    ptr = printhello;
    ptr(" tom");
}
