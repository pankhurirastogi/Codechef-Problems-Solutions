#include<iostream>
using namespace std;
int main()
{
 int a=0,b=1,c;
 int l,i;
 cout<<"enter the limit";
 cin>>l;
 cout<<a,b;
 for(i=1;i<l-2;i++)
 {cout<<"y";
     c=a+b;
     cout<<c;
     a=b;
     b=c;
 }

 return 0;
}
