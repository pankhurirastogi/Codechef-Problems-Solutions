#include<iostream>
using namespace std;
int main()
{  int t;
   cin>>t;
   for(int k=0;k<t;k++)
   {
       int n;
       cin>>n;
       string correct;
       string actual;
       int ll= n+1;
       long int win[ll];
       for(int i=0;i<n;i++)
       {
           cin>>correct[i];
       }
       for(int j=0;j<n;j++)
       {
           cin>>actual[j];
       }



       for( int u=0; u<ll;u++)
       {
           cin>>win[u];

       }


        int right=0;
       for(int l=0;l<n;l++)
       {
           if(correct[l]==actual[l])
           {
               right+=1;

           }
       }

      long int max_value=win[right];

       for(int tt=0;tt<ll;tt++)
       {
           if(max_value<win[tt])
           {
               max_value = win[tt];
           }
       }
      cout<<max_value<<"\n";
   }
    return 0;
}
