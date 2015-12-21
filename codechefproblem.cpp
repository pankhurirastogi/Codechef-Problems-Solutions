#include<iostream>
using namespace std;
int main()
{ int sum,r,dn,dnsum,T,k;
   int ans[]={0,1,4,3,8,5,12,7,16,9};
   int b[1000];
   long A,B,i,n;


cin>>T;
 for(k=1;k<=T;k++)
  {
    dnsum=0;
    cin>>A;
    cin>>B;
   for(i=A;i<=B;i++)
   {
     sum=0;
     n=i;
    while(n>0)
    {
        r=(int)(n%10);
        /*if(r%2==0)
        {
            sum=sum+(r*2);
        }
        else
        {
            sum=sum+r;
        }*/
        sum=sum+ans[r];
        n=n/10;
    }

  dn=sum%10;



  dnsum=dnsum+dn;


   }


b[k]=dnsum;
}

  for(k=1;k<=T;k++)
   {
      cout<<b[k]<<"\n";
   }


    return 0;
}
