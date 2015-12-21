#include<iostream>
#include<string>
using namespace std;
int main()
{  int t,m;
    cin>>t;
    for(m=0;m<t;m++)
    {


     string str,s;
    cin>>str;
    int j,k,flag,temp=0;
     float len;
    for(int i=0;str[i]!='\0';i++)
    {   flag=1;
        s=str;
        s.erase(i,1);

        len=s.length();
        for(k=0,j=len-1;k<len/2;++k,--j)
 {
  if(s[j]!=s[k])
  flag=0;
 }

  if(flag==1)
     {temp=1;
       break;
     }

    }
    if(temp==1)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    }

return 0;

}
