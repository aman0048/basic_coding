#include<iostream>
using namespace std;

/* call by value

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<< a << " " << b << endl;
}*/




//call by reference
/*void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<< a << " " << b << endl;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"before swapping" <<" " << x << " " << y << endl;
    cout<<"after swapping" <<" "; //swap(x,y)<<endl;   this is not working
    swap(x,y);
    return 0;
}
*/





//directly in main using temp varibale 
/*int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"before swapping" <<" " << a << " " << b << endl;
	int temp= a;
	a=b;
	b=temp;
	
	cout<<"after swapping" <<" "<< a << " " << b;
	return 0;
}
*/






//this method describes only swapping of integers value;
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"before swapping" <<" " << a << " " << b << endl;
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"after swapping" <<" "<< a << " " << b;
	return 0;
}
