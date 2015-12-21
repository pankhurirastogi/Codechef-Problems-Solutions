#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{   long long int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        string s,r;
         long long int p,q,n,j;
         int z;
        cin>>s;
        cin>>p;
        z=r.length();
        r.copy(s,z,z+1);
        for(j=0;j<p;j++)
        {
           r=r+s;
        }

      sort(r,r+z);
      for(j=0;j<q;j++)
      {
          cin>>n;
          cout<<r[n-1]<<"\n";

      }
    }
    return 0;
}
