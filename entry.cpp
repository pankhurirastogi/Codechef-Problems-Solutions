#include<iostream>
using namespace std;
int main()
{  int t;
cin>>t;
    for(int k=0;k<t;k++)
    {
        int a ;
        int b;
        int min_entry ,max_entry;
         cin>>a;
         cin>>b;
         if(a>b)
         {
             min_entry = a;
         }
         else
            min_entry = b;
         max_entry = a+b;

         cout<<min_entry<<" " ;
                  cout<<max_entry<<"\n";
    }
    return 0;
}
