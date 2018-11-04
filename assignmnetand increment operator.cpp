#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	
	cout << x++ << endl;   // 10  it first prints and then incerments
		cout << x << endl; // 11
		cout << ++x << endl;  //   12        it first increment and then prints
			cout << x << endl;  // 12
	 return 0;
}
