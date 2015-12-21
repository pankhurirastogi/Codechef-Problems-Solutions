#include<iostream>
using namespace std;
int main()
{   int t;
     cin<<t;
     for(i=0;i<t;i++)
     {
         int n;
         cin>>n;
         for(j=1;j<=n;j++)
         {
             fact=fact*j;
         }
         cout<<fact;
     }
    return 0;
}
