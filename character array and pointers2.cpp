#include<iostream>
#include<cstring>

using namespace std;

//void print(const char *c) // if we want to read value and not to change anything so we use const
void print(char* c)    // or we can write char c[]
{
    c[0] = 'a'; // this will first change the value of h to a and then prints all character one by one
    while (*c != '\0')
 {
    cout << *c;
    c++;
 }


 cout << "\n";
}

 int main()
 {
     char c[20] = "hello";// string gets stored in the space for array
    // char *c = "hello";  string gets stored as compile time constant
     //c[0] = 'a';  it will give compilation error as char *c makes hello as constant and we cannot change hello
     // as it is treated as constant

     print(c);

     return 0;
 }
