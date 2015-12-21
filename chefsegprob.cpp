#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()

{    int t;
     cin>>t;
     for(int m=0;m<t;m++)
     {


      double X,y;
     long int k,j,i;
    cin>>X;
    cin>>k;
    if(log2(k)==ceil(log2(k)))
    { long int u=ceil(log2(k));
     i=u+1;
     j=u;


    }
    else
    {
        i=ceil(log2(k));
        j=i-1;
    }



     if(k==1)
     {
         y=X/2;
     }
     else

   {

    y=(X/pow(2,i))+((k-pow(2,j))*(X/pow(2,j)));
   }
    printf("%.9lf\n",y);

     }



    return 0;
}
