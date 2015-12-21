#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ string ar="abcdefghijklmnopqrstuvwxyz";
  int t,k;
  cin>>t;
  for(k=0;k<t;k++)
  {string s;
   int flag=0;
   cin>>s;
   int i=0;
   while(s[i]!='\0')
   {
       int x=count(s.begin(),s.end(),s[i]);

        if(x!=(ar.find(s[i])+1))
            {    flag=1;
                break;
            }
        else
            i++;
   }
   if(flag==1)
   {
       cout<<"NO"<<"\n";
   }
   else
    cout<<"YES"<<"\n";
  }

return 0;
}
