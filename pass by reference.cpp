#include<iostream>
using namespace std;

void passbyvalue(int x);
void passbyreference(int *x);

int main()
{
    int a = 12;
    int b = 13;

    passbyvalue(a);
    passbyreference(&b);

    cout << a << endl;
    cout << b << endl;
    return 0;
}

void passbyvalue(int x)
{
    x = 99;
}

void passbyreference(int *x)
{
    *x = 99;
}
