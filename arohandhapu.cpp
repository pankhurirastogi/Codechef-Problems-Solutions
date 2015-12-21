#include<iostream>
#include<string>
using namespace std;
int main()
{   int t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int res=0;
        if(s1.length()!= s2.length())
        {
            res=-1;
        }
        else
        {
            for(int i=0;i<s1.length();i++)
            {
                if(s1[i]!=s2[i])
                {
                    res++;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
