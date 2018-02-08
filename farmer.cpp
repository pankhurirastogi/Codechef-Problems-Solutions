#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>>t;
    for(int l=0;l<t;l++)
    {
     int x ,y ;
     int z;
     cin>>x>>y;
     int sum =x+y;

     for(int i=sum+1;i<=3000;i++)
     { int j ;

         for( j=2;j<i;j++)
         {
             if (i%j==0)
             {
                 break;
             }
         }

         if(j==i)
         {   z=i-sum;
             break;

         }

     }


    }
}
