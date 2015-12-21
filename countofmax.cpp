#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t,k,maxi,loc;
    cin>>t;
    for(k=0;k<t;k++)
    { int a[26]={0};
        string s;
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            a[s[i]-97]++;
        }


    maxi=a[0];
    loc=0;
    for(int j=1;j<26;j++)
    {
      if(maxi<a[j])
      {
          maxi=a[j];
          loc=j;
      }
    }
    char ci=(char)(97+loc);

    replace(s.begin(),s.end(),ci,'?');
    cout<<s<<"\n";
    }

    return 0;
}
