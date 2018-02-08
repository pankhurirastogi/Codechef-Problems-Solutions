#include<iostream>
using namespace std;

int gcd(int n1 ,int n2)
{

    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }


    return n1;
}
int main()
{    int t;
    cin>>t;
    for(int tes=0; tes<t;tes++)
    {
        int n;
        cin>>n;
        int maxcount = 0;
        int cc;
        int nn = n;
        for(int i =2 ;i<=n;i++)
        {    cc =0 ;
            for(int j =1 ;j<i ;j++)
            {
                int l = gcd(i,j);
                  {
                      if(l==1)
                        cc++;
                  }
            }
            if(cc>maxcount)
            {
                maxcount=cc;
                nn=i;
            }
        }

        cout<<nn<<"\n";
    }


    return 0 ;
}
