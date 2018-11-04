#include<iostream>
using namespace std;

template<class t>
class aman
{
	t first, second;
	public:
 	aman(t a, t b )
	 {
	 	first = a;
	 	second = b;
	 	
		}
		
		t bigger ();
				
};

template<class t>
t aman<t>::bigger()  // we have tp include <t> coz we need to tell the compiler that our template fun is same as class template 
{
	return (first>second?first:second);
 } 
 
 int main()
 {
 	aman <int>a(10,20);
 	cout <<a .bigger();
 	return 0;
 }
