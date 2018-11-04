#include<iostream>
using namespace std;
void func(int a[][3],int Size)
{
    for (int i=0;i<Size;i++)
    {
         for (int j=0; j < 3; j++)
         {
            cout << a[i][j] << "   " ;
         }
         cout << "\n";
    }
}

int main()
{
    //int c[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};

    //int a[2] = {1,2};

     int a[2][3] = {{1,2,3},{4,5,6}};
    int Size = sizeof(a)/sizeof(a[0]);
    func(a ,Size);
    return 0;
}
