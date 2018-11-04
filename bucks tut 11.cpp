/* Application memory
HEAP 
STACK
STATIC/GLOBAL
CODE (TEXT) 

*/
#include<iostream>
using namespace std;

int addnumber(int x =10, int y=30)
{
	return (x+y);
}
int main()
{
	cout<< addnumber();
	return 0;
}
