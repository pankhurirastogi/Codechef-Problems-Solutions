#include<iostream>
using namespace std;
int main()
{
   int t,m;
   cin>>t;
   for(m=1;m<=t;m++)
   {
       int n,i,j,k,john,temp,loc;
       int arr[105];
       cin>>n;
       for(i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       cin>>k;
       john=arr[k];
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n-i;j++)
           {
               if(arr[j]>arr[j+1])
               {
                   temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
           }
       }
       for(i=1;i<=n;i++)
       {
           if(john==arr[i])
           {
               loc=i;
               break;
           }
       }
       cout<<loc<<"\n";



   }
    return 0;
}
