#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int T,m;
     cin>>T;
     for(m=0;m<T;m++)
     {
      long int n,sum=0,i=1,j;
       cin>>n;
             while(pow(5,i)<=n)
     {
         j=floor(n/(pow(5,i)));
         sum=sum+j;
         i++;
     }
              cout<<sum<<"\n";
     }

    return 0;
}
