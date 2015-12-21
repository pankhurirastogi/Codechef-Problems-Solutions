#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,ini=0,count0=0,count1=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            ini=ini^a[j];
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==0)
            {
                count0++;
            }
            else if(a[j]==1)
            {
                count1++;
            }
        }
        if(ini==0)
        {
            cout<<count0<<"\n";
        }
        else
            cout<<count1<<"\n";
    }
    return 0;
}
