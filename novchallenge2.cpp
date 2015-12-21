#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {


  string a;
  cin>>a;
  float len=a.length();
  int flag=0;

  for(float i=0;i<ceil((len/2));i++)
  {
      if(a[i]!=a[a.length()-1-i])

      {
          if(flag==0)
          {
              flag=1;
          }
          else
          {
              flag++;
          }
      }
      if(i==(a.length()-1-i))
      {
          flag=1;
      }

  }

  if(flag==1)
  {
      cout<<"YES"<<"\n";
  }
  else
    cout<<"No"<<"\n";
  }

    return 0;
}
