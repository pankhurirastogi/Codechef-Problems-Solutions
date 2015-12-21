#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,k;
     cin>>t;
     for(k=0;k<t;k++)
     {    int r,c;
           int flag=0;
         char a[105][105];
         cin>>r;
         cin>>c;
         for(int i=0;i<r;i++)
         {
            cin>> a[i];
         }
                  for(int i=0;i<r;i++)
                  {
                      for(int j=0;j<c;j++)
                      {
                          if((a[i][j]=='s'|| a[i][j]=='S')&&((j+4<c)))
                          {

                              if((a[i][j+1]=='p'||a[i][j+1]=='P')&&(a[i][j+2]=='o'||a[i][j+2]=='O')&&(a[i][j+3]=='o'||a[i][j+3]=='O')&&a[i][j+4]=='n'||a[i][j+4]=='N')
                              {
                                  flag=1;
                                  break;
                              }
                          }
                          if((a[i][j]=='s'||a[i][j])&&(i+4<r))

                             {if((a[i+1][j]=='p'||a[i+1][j]=='P')&&(a[i+2][j]=='o'||a[i+2][j]=='O')&&(a[i+3][j]=='o'||a[i+3][j]=='O')&&a[i+4][j]=='n'||a[i+4][j]=='N')
                              {
                                  flag=2;
                                  break;
                              }







                          }

                      }
                         if(flag!=0)
                         {
                             break;
                         }
                  }

                  if(flag!=0)
                  {
                      cout<<" There is a spoon!"<<"\n";
                  }
                  else
                  {
                      cout<<"There is indeed no spoon!"<<"\n";
                  }

     }
     return 0;
}
