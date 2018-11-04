#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char a[100];
    int i,j,size;
    cin>>a;
    //cout<<a;
    for(i=0;a[i]!='\0';i++)
    {
        if(isupper(a[i]))// This checks if the given character is uppercase or not if yes then it will give non zero value
            a[i]=tolower(a[i]);
    }
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]=='a'|| a[i]=='e' || a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y' )
        {
            j=i;
            //cout<<a[j];
            for (;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
            i--;][]
           //cout<<a;
        }
D}
    size=i;
   // cout<<a<<endl;
    char b[200];
    
    for (i=0,j=0;i<2*size;i++)
    {
        if(i%2==0){
            b[i]='.';
        }else {
            b[i]=a[j++];
        }
    }
    b[i]='\0';
    cout<<b;
     
    return 0;
}