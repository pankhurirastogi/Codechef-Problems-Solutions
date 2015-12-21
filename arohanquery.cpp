#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{    long n,q;
    vector <int> a(1000000);
      cin>>n>>q;
      for(long k=1;k<=n;k++)
      {
          cin>>a[k];
      }
      for(long u=1;u<=q;u++)
      {
          string s;
          long i,j;
          cin>>s>>i>>j;
          long sum=0;
          for(long v=i;v<=j;v++)
          {
              sum=sum+a[v];


          }
          cout<<sum<<"\n";
      }



    return 0;
}
