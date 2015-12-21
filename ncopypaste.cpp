#include<iostream>
#include<set>
using namespace std;
int main()
{       int t;
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
     set<int> s(a,a+n);
     cout<<s.size()<<"\n";


    }


    return 0;
}
