#include<iostream>
using namespace std;
 int main()
 {
 /*	int a = 1025;
 	int *p;
 	p=&a;
 	
 	cout<<"size of integer is " << sizeof(int) << " bytes " << endl;
 	cout<<"address and value of p is " << p << " " << *p <<endl;
 	char *p0;
 	p0=(char*)p;  // typecasting
 		cout<<"size of char  is " << sizeof(char) << " bytes " << endl;
 	cout<<"address and value of p0 is " << p0 << " " << *p0 <<endl;
 	
 	
 */	
 	//generic pointer type
 	 
 	 int a = 1025;
 	 int *p;
 	 p=&a;
 	 	cout<<"size of integer is " << sizeof(int) << " bytes " << endl;
 	cout<<"address and value of p is " << p << " " << *p <<endl;
 	
 	//void pointer - generic pointer 
 	
 	void *po;
 	
 	po=p; // no need of type casting
 		
 	cout<<"address and value of p is " << po << " " << *po <<endl;
 	
 	//*po will not get dereferenced it can only point to address only
	 
	cout << po+1;  
 	// this will also not work coz this also give compilation error
 	
 	
 	
 	 
 	
 	
 	
 	
 	
 	
 	return 0;
 }
