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
     int  m=distance(arr,find(arr+4,arr+n,0));
        cout <<m;
     // int m=0;
      //int j=0;



      /* m=distance(arr+m,find(arr+m,arr+n,0));
        cout <<m;
        cout<<arr;
        cout<<*(arr);
        cout<<"i m ";
        cout<<arr+m;
        cout<<"yoyo";
        cout<<*(arr+m);

             int   u=distance(arr,find(arr+m,arr+n,0));
             cout<<"hii";
             cout<<u;*/

              // cout<<u;

      // ary[j]=m;
       //j++;


   /* for(int l=0;l<=j;l++)
       cout<<ary[l];*/

    }
    return 0;
}
