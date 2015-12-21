#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
         long int n;
        cin>>n;
        string c="";
        string p="";
        char c_i;
        char p_i;
        for(long int i=0;i<n;i++)
        {
            cin>>c_i;
            cin>>p_i;
            c+=c_i;
            p+=p_i;
        }

        string s;
        cin>>s;
        for(int j=0;s[j]!='\0';j++)
        {   int k=c.find(s[j]);
            if(k!=-1)
            { s[j]=p[k];

            }
        }
       if(s=="0")
       {
           cout<<s<<"\n";

       }
       else{

      long int l ,m,sta,endd;
      sta=0;
       if(s[0]=='0')
       {
           for( l=0;(s[l]=='0'&s[l]!='\0');l++)
           {
             sta=l+1;
           }

       }

       if(sta==s.length())
       {
           cout<<"0"<<"\n";

       }
       else
      {


       long int u=s.length();
      /** if(s[u-1]=='0')
       {  endd=(u)-2;
           for(m=u-2;s[m]=='0';m++)
           {endd=m-1;

           }

       }**/
       endd=u-1;
       for(u=u-1;s[u]=='0';u--)
       {
          endd=u-1;
       }

      if(s[endd]=='.')
      {
          endd--;
      }


     cout<<s.substr(sta,(endd-sta+1))<<"\n";
       }
    }
    }
    return 0;

}
