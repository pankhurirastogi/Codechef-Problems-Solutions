#include<iostream>
#include<vector>
using namespace std;
int parti(vector<int> &a,int beg,int en)
{
    int p=beg, pivot=a[beg], loc;

for(loc=beg+1;loc<=en;loc++)
{
if(pivot>a[loc])
{
a[p]=a[loc];
a[loc]=a[p+1];
a[p+1]=pivot;

p=p+1;
}
}
return p;

}
void quicksort(vector<int> &a,int beg,int en)
{if(beg<en)
{
int p=parti(a,beg,en);

quicksort(a,beg,p-1);
quicksort(a,p+1,en);
}

}

int main()
{     int t,i,temp,j;
      vector <int> a(1000000);
      cin>>t;
      for(i=1;i<=t;i++)
      {
          cin>>a[i];
      }
      quicksort(a,1,t);


            for(i=0;i<t;i++)
      {
          cout<<a[i]<<"\n";
      }



     return 0;
}
