#include<iostream>
using namespace std;
int main()
{
    int m,r,s=0;
    cout <<"enter a number";
    cin>>m;
    int n=m;
    while(m>0)
    {
        r=m%10;
        s=s+(r*r*r);
        m=m/10;
    }
    if(n==s)
    {
        cout<<"armstrong no";
    }
    else
    {
        cout<<"not armstrong no";
    }
    return 0;

}
