#include<iostream>
using namespace std;
int main()
{    int t;
     cin>>t;
     for(int k=0;k<t;k++)
    {


     int a[100000];
     int n,j;
     cin>>n;
     for(int  i=0;i<n;i++)
     {
         cin>>a[i];

     }
     int l=n;
     for(int i=0;i<n;i++)
     {
         if(a[i]!=-1)
         {
             for(j=i+1;j<n;j++)
             {
                 if(a[i]==a[j])
                 {
                     a[j]=-1;
                     l--;
                 }
             }
         }
     }
     cout<<l<<"\n";
    }

}
