#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        long int co=0;
        long int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }

        long int mim=a[0];
        int fal;
        int prev=0;
        for(int j=1;j<n;j++)
        {   if(j!=1)
              {
                  prev=fal;
              }
            if(mim!=a[j])
            {   if(prev==(j-1))
                 {   if(j==1)
                       {
                           co=co+2;
                       }
                       else
                     co=co+1;
                 }
                 else

                {co=co+2;}
                fal=j;
                mim=a[j];
            }

        }
        cout<<co<<"\n";


    }
}
