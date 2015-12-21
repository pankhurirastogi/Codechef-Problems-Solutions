#include<iostream>
using namespace std;
void greatestfunc(int a[])
int main()
{int arr[3][3],i,j;
  cout<<"enter the numbers";
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      {
          cin>>arr[i][j];
          cout<<arr[i][j];
      }
  }
    for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      {
          cout<<arr[i][j];
      }
      cout<<"\n";
  }

 return 0;
}
