#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int t,i;
    cin>>t;
     for(i=0;i<t;i++)
     {
         long int l,d,s,c,k;
         cin>>l;
         cin>>d;
         cin>>s;
         cin>>c;






         if((s*pow(c+1,d-1))>=l)

         {
                       cout<<"ALIVE AND KICKING"<<"\n";
         }
         else
         {
             cout<<"DEAD AND ROTTING"<<"\n";
         }



     }
    return 0;
}
