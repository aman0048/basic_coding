#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int i;
	int n,temp;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;
			}
		}
		
	}
	cout<<a;
	return 0;
}
