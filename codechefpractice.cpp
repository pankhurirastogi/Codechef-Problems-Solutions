#include<iostream>
using namespace std;
int main()
{    int a[5][6];
      int i,j,k,temp;
    cout<<"enter a series";
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {cin>>a[i][j];
    }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
       {cout<<"hiii";
           for(k=0;k<2-i-1;k++)
           {
               if(a[i][k]>a[i][k+1])
               {
                   temp=a[i][k];
                   a[i][k]=a[i][k+1];
                   a[i][k+1]=temp;
                   cout<<"hiii";
               }
           }
       }
    }

    for(i=0;i<3;i++)
     {

       for(j=0;j<3;j++)
    {


    cout<<a[i][j];

    }
    cout<<"\n";

    }


    return 0;
}
