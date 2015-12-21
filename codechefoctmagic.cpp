     Q.#include<iostream>
using namespace std;
int main()
{int T,R,G,B,i,M,j,maxi;
long r[100],g[100],b[100],maxr;maxb,maxg

   cin>>T;
   for(i=1;i<=T;i++)
   {
       cin>>R>>G>>B>>M;
       for(j=0;j<R;j++)
        cin>>r[j];
     for(j=0;j<G;j++)
        cin>>g[j];
    for(j=0;j<B;j++)
        cin>>b[j];
       for(k=1;k<=M;k++)
       {


        maxr=r[0];
        for(j=0;j<R;j++)
        {  if(maxr<r[j])
                maxr=r[j];

        }
                maxg=g[0];
        for(j=0;j<G;j++)
        {  if(maxr<g[j])
                maxr=g[j];

        }
        maxb=b[0];
        for(j=0;j<B;j++)
        {  if(maxr<b[j])
                maxr=b[j];

        }
     if(maxr>maxb)
     {
         if(maxr>maxg)
         {
             maxi=1;
         }
         else
            maxi=2;
     }
     else{
        if(maxb>maxg)
        {
            maxi=3;
        }
        else
            maxi=2;
     }

      if(maxi==1)
      {
         for(j=0;j<=R;j++)
            r[j]=r[j]/2;
      }
            if(maxi==2)
      {
         for(j=0;j<=G;j++)
            g[j]=g[j]/2;
      }
            if(maxi==3)
      {
         for(j=0;j<=B;j++)
            b[j]=b[j]/2;
      }
       }

   }



   return 0;

}
