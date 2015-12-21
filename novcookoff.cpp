#include<iostream>
#include<string>
using namespace std;
int main()
{   int t;
    cin>>t;
     for(int k=0;k<t;k++)
     { string a;
       char b[1000005];
       long  int balance=0,maxbalance=0,i;
       cin>>a;
       for(long int  j=0;a[j]!='\0';j++)
       {
           if(a[j]=='(')
           {
               balance++;
           }
           if(a[j]==')')
           {
               balance--;
           }
           maxbalance=max(maxbalance,balance);
       }


        for( i=0;i<=maxbalance;i++)
        {
            b[i]='(';
        }

       for( i=maxbalance;i<(2*maxbalance);i++)
       {
           b[i]=')';

       }
       b[i]='\0';


       cout<<b<<"\n";

     }

    return 0;
}
