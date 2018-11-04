#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *p;
	p=&a ;
	*p = 6;
	int **q = &p;
	int ***r= &q;
	cout << *p <<endl;
	cout << *q <<endl;
	cout << **q <<endl;
	cout << *r <<endl;
	cout << **r <<endl;
	cout << ***r <<endl;
	***r = 10;
	cout << *p <<endl;
	cout << a <<endl;
	
	**q= *p +2;
	cout << **q;
	cout << *p <<endl;
	cout << a <<endl;
	return 0;
}
