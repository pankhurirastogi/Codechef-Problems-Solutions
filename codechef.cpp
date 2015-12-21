#include<iostream>
using namespace std;
int main()
{int T,N,i,k,j;
 long long A[1000],b[10],sum,temp;

 cin>>T;
 for(i=0;i<T;i++)
 {sum=0;

  cin>>N;

   for(j=0;j<N;j++)
   {
       cin>>A[j];
   }
   for(j=0;j<N-1;j++)
   {
       for(k=0;k<N-j-1;k++)
       {
           if(A[k]<A[k+1])
           {
               temp=A[k];
               A[k]=A[k+1];
               A[k+1]=temp;
           }
       }
   }

   for(j=0;j<N;j=j+2)
   {
       sum=sum+A[j];

   }

   b[i]=sum;

 }
 for(i=0;i<T;i++)
 {
     cout<<b[i];
     cout<<"\n";
 }

return 0;
}
