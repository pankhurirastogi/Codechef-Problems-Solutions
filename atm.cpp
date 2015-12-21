#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int x;
    float y;
     float l;
    cin>>x>>y;
    if((x+0.5)>y)
    {
        l=y;
    }
    else
    {

    if(x%5==0)
    {
        l=y-x-0.5;
    }
    else
    {
        l=y;
    }
    }
    cout<<setprecision(2)<<fixed<<l;
    return 0;
}
