#include<iostream>
using namespace std;
int main()
{int T, A[100],N,M,b[100],i,j,k,max,flag;

   cin>>T;
  for(i=1;i<=T;i++)
  {   flag=0;
      cin>>N;
      cin>>M;
      for(j=1;j<=N;j++)
      {
          cin>>A[j];
      }
      max=A[1];
      for(k=1;k<=N;k++)
      {
          if(max<A[k])
            {
                max=A[k];
            }
      }
      for(k=1;k<=N;k++)
      {
          if(max>A[k]&& (max-A[k])<=M)
          {   M=M-(max-A[k]);
              A[k]=max;


          }

      }



     for(k=1;k<=N;k++)
      {
          if(A[k]==max)
          {
              if(M%N==0)
              {
                  flag=1;

              }
              else
                {flag=0;
                break;
                }
          }
          else
            {flag=0;
                     break;
            }


      }
      if (flag==0)
        b[i]=0;
      else
        b[i]=1;


  }
  for(i=1;i<=T;i++)
  {
     if(b[i]==1)
        cout<<"Yes"<<"\n";
     else
        cout<<"No"<<"\n";
  }
return 0;

}
