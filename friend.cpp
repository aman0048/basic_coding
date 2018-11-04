#include<iostream>
using namespace std;

class sample
{
    int a;
    int b;
public:
    void setvalue(int x, int y)
    {
        a=x;
        b=y;
    }
    //friend datatype name(class name object)
    //if we want to declare friend outside then just remove word friend and copy fn as it is


    friend float mean(sample &s); // we can use & in parenthesis
                                   // we can directly write object name
};

float mean(sample &s)
{
    return (s.a + s.b)/2.0;
}

int main()
{
    sample sa;
    int a, b;
    cin>>a>>b;
    sa.setvalue(a,b);
    cout << "Mean value is " << mean(sa) << endl;  // for calling in main we need to name fn name and pass object

    return 0;
}
