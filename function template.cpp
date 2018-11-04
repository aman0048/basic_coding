#include<iostream>
using namespace std;

template < class t1 , class t2 >

t1 smallest(t1 a, t2 b)
{
	return (a<b?a:b);  // if a < b then return a else b
	
}

int main()
{
	int x = 89;
	double y = 67.67;
	
	cout << smallest(y,x) << endl;
}
