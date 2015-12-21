#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   int n;
        cin>>n;
        int sum =n;
        for(int j=1;j<=n/2;j++)
        {
            if(n%j==0)
            {
                sum=sum+j;
            }
        }
        cout<<sum<<"\n";

    }
    return 0;
}
