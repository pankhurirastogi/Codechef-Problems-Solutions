#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
      int n;
      int arr[10005];
      int ary[10000]={0};
      cin>>n;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      m=-1;
      j=0;
      while(n>m;)
      {
           m=distance(arr,find(arr+m+1,arr+n,0));
           ary[j]=m;
           j++;
      }
    }
    return 0;
}
