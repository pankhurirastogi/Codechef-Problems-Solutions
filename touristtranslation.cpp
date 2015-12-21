#include<iostream>
#include<string>
using namespace std;
int main ()
{ int t;
   string m;
  cin>>t;

    cin>>m;
   for(int l=0;l<t;l++)
   {


    string ba="abcdefghijklmnopqrstuvwxyz";
    string ca="ABCDEFGHIJKLMNOPQRSTUVWXYZ";


    string n;

    cin>>n;
    for(int i=0;n[i]!='\0';i++)
    {
       if(n[i]=='_')
       {
           n[i]=(char)32;

       }
       else
       {  if(n[i]>=65&&n[i]<=90)
           {int k=ca.find(n[i]);
            n[i]=m[k]-32;

           }
           else
           {


          int k=ba.find(n[i]);
          if(k!=-1)
          {
             n[i]=m[k];
          }
           }
       }
    }
    cout<<n<<"\n";
   }

    return 0;
}
