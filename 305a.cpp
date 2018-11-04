#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,t,u,b[100];
    string a[100];
    cin>>n;
    t=u=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i].size();j++)
        {
            k=0;
            if(a[i][j]=='0')
            {
                k=1;
                break;
            }
        }
        if(k)
            b[t++]=i;
        else if(k==0&&u==0)
        {
            b[t++]=i;
            u++;
        }
    }
    cout<<t<<endl;
    for(i=0;i<t;i++)
        cout<<a[b[i]]<<" ";
    return 0;
}
