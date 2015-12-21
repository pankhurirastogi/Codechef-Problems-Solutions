#include<iostream>
using namespace std;
int main()
{   long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        long int n;
        cin>>n;
        long long int allocati,current,inn;
        for(long int j=0;j<n;j++)
        { cin>>inn;
            if(j==0)
            {   current=inn;
                allocati=current;
            }
           else
           {if(inn>current)
              {
                  allocati=allocati+(inn-current);
                  current=current+(inn-current);
              }
              else

              {
                  current=inn;
              }

           }

        }
         cout<<allocati<<"\n";

    }
    return 0;
}
