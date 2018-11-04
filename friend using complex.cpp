#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;
public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    friend Complex Comlex_sum(Complex x ,Complex y)
    {
        Complex z;
        z.a = x.a + y.a;
        z.b = x.b + y.b;
        return (z);
    }
    void print( Complex z)
    {
        cout << z.a << "  +  " << z.b << endl;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.input(1,2);
    c2.input(1,2);
   c3 = Comlex_sum(c1,c2);
    cout << "A = ";
    c1.print(c1);
    c2.print(c2);
    c3.print(c3);
    return 0;
}
