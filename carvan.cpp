#include<iostream>
using namespace std;
int main()
{   int t;
     cin>>t;
     for(int j=0;j<t;j++)
     {
         int n;
         cin>>n;
         int mini=2147483647;
         int vari;
         int max_no=0;
         for(int k=0;k<n;k++)
         {   cin>>vari;
             if(vari<=mini)
             {mini=vari;
              max_no++;
             }

         }
         cout<<max_no<<"\n";
     }
    return 0;
}
