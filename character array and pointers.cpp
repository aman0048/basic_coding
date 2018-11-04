/* character array and pointers

1) How TO Store strings

    size of array >= no. of characters in string + 1
    eg- "john"      so size must be >=5

    char c[8];
    c[0] = 'j' , c[1] = 'o' , c[2] = 'h' ,c[3] = 'n' ,
    c[4] = '\0';



    rule:- A string in c has to be null terminated

*/






#include<iostream>
#include<cstring>
using namespace std;

void print(char* c)    // or we can write char c[]
{
    int i=0;

    while (c[i] != '\0')
    {
        cout << c[i] << endl;
        i++;
    }
    cout << "\n" ;
}
 /*
 or we can do
 while (*c != '\0')
 {
    cout << *c;
    c++;
 }
                     */




int main()
{
    char c[5];        // c[4]-- output displays john and some garbage value
    c[0] = 'j';
    c[1] = 'o';
    c[2] = 'h' ;
    c[3] = 'n' ;
    c[4] = '\0' ;  // now all garbage value is rejected and output will be john only
    cout << c << endl;  // if we increase size of  char array the ans remains same


    int length = strlen(c);
    cout << "length = " << length <<endl;





    // or we can do in this way

    char a[20] = "AMAN";// it itself includes \0 (null) symbol

    /* we cannot define char a[20];
     and  a= "john";       this is invalid
    */

    int len= strlen(a);
    cout << "Length = " << len << endl;








    char ch[] = "Ashu";
    // we can do this also

    char ch1[5] = {'j','o','h','n','\0'};
    // if we write char ch[4] = "ashu" ; compiler will give error char bcoz compiler eill force this array to be of size 5
    cout << "size in bytes = " << sizeof(ch) << endl;
    int leng = strlen(ch);
    cout << "Length = " << leng << endl;











/* 2) Array and pointers and different types that are used in similar manner
char c1[] = "hello";
char *c2;
c2 = c1;
cout << c2[1];   // it prints e

c2[0] ='a' //   it will replace h with a and it becmes "aello"

c2[i] is *(c2+i)
c1 or *(c1+i)


we cannot do
c1=c2;
c1=c1+1;

but we can do c2++ this will increment the c2 to next address in array






3) Array are always passed to function by reference


declare print fun above

*/


char cama[20] = "hello";
print(cama);
return 0;
}
