#include<iostream>
using namespace std;
int sum_comp(int l)
{  int summ =0;
    for(int m=1;m<=l;m++)
    {
        summ+=m;
    }
    return summ;
}
int main()
{  int t;
cin>>t;
   for(int k=0;k<t;k++)
   {   int d;
       int n;
       cin>>d;
       cin>>n;

       for(int j=0;j<d;j++)
       {
           n=sum_comp(n);
       }

       cout<<n<<"\n";

   }
    return 0;
}


