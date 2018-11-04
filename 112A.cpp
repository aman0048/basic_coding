#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[300];
	char b[300];
	string s1,s2;
	cin>>a>>b;
	int n;
	n=strlen(a);
	for (int i=0;i<n;i++)
	{
		if(isupper(a[i]) || isupper(b[i]))
		{
		     a[i]=tolower(a[i]);
		     b[i]=tolower(b[i]);
     	}
    }
    //cout<<a<<b;
    s1=a;
    s2=b;
    //cout<<s1<<s2<<endl;
	
		if(s1<s2)
	      {
		      cout<<"-1"<<endl;
  	      }
	    else if(s1>s2)
	      {
		     cout<<"1"<<endl;
	      }
	     else
	     {
	         cout<<"0"<<endl;	
	      }
	return 0;
}
