#include<iostream>
using namespace std;

int main()
{
    //int b[2][3] = {2,3,4,5,6,7};
  // int b[6] = {2,3,4,5,6,7};
    //cout << b << endl;
    //cout << *b << endl;
    //cout << b[0] << endl;
    //cout << &b[0][0] << endl;


    // b[i][j] = *(b[i] + j)
            //   pointer to integer
        //        = *(*{b+i} + j)
//                  pointer to one dimensional array of three integers








// for 3 dimensional array




int b[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};

int (*p)[2][2] = b;

cout << b << endl;        // 400  int (*)[2][2]
  cout << *b  <<  b[0]  <<  &b[0][0]  << endl;  // 400
// int (*) [2] pointer to one dimensional array of integers of size 2

cout << *(b[0][1] + 1 )<<endl;  //9
cout << *(b[1] + 1)<<endl; // or c[1][1] or &c[1][1][0]    424



return 0;
}
