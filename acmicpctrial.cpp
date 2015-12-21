#include<iostream>
#include<string>
using namespace std;
int main()
{  long long int T,i;


  cin>>T;
  for(i=0;i<T;i++)
  {   string p;
      long long int j;
      long long int  len=0;

      long long int  in1,in2,countr=0;
      cin>>p;
      j=0;
      while(p[j]!='\0')
      {
         if(p[j]=='.')
         {
             in1=j;
             in2=p.find_first_of('#',in1);
             if((in2-in1)>len)
                {len=in2-in1;
                 countr++;
                }
             j=in2;

         }
         else
         {
             j++;
         }
      }
      cout<<countr<<"\n";
  }


  return 0;
}
