#include<iostream>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<3;i++)
    {

        unsigned long long int s,e,a[100000][2],N ,c=0,j;
        cin>>s;
        cin>>e;
        cin>>N;


        for(j=0;j<N;j++)
        {
            cin>>a[j][0];
            cin>>a[j][1];
        }

        for(j=0;j<N;j++)
        {
        if(a[j][0]<s)
        {
            if(a[j][1]>s)
            {
                c++;

            }
        }
        else if(a[j][0]>s)
        {
            if(a[j][0]<e)
            {
                c++;

            }
        }
        }

        if(c>0)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";

        }
    }
    return 0;
}
