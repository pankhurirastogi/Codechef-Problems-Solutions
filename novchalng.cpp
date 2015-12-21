#include<iostream>
#include<string>
using namespace std;
int main()
{    int t,k;
     cin>>t;
     for(k=0;k<t;k++)
     {


     string s;
    cin>>s;
    int j;
    int l=s.length();
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='0')
        {
            for(j=i+1;s[j]!='\0';j++)
            {
                if(s[i]==s[j])
                {
                    s[j]='0';
                    l--;

                }
            }
        }
    }
    cout<<l<<"\n";
     }

    return 0;
}
