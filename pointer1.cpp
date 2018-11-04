#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a=1002;
	int *p;
	p=&a;
	cout<< "size of p" << sizeof(int) << endl;
	cout<< "address of p" << p << " " << "value at p = " << *p << endl;
	char *q;
	q=(char*)p;
	cout<< "size of p" << sizeof(char) << endl;
	cout<< "address of p" << q << " " << "value at p" << *q <<endl;
	return 0;
}
