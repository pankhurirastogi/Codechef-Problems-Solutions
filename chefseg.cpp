#include<iostream>
using namespace std;
int main()
{    int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {double x,y=0,x1=0;
      int k;
      cin>>x;
      cin>>k;
      for(int j=1;j<=k;j++)
      {

            y=(x-x1)/2;


            if(y-x1<=x-y)
            {
                x=y;
            }
            else
            {
                x1=y;
            }


      }
      cout<<y<<"\n";

     }
    return 0;
}
