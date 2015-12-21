#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int x,y,n,con=0;
        int arr[505];
        cin>>y;
        cin>>x;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
       sort(arr,arr+n);
       int diff=y-x;


          for(int i=n-1;i>=0;i--)
              {

                  if(diff>=arr[i])
                  {   int m=(diff/arr[i]);


                      con=con+m;
                      diff=diff-(m*arr[i]);


                  }
              }


       cout<<con<<"\n";



    }
    return 0;
}
