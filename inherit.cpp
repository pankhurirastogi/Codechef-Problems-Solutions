#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,j;
     string str;
    cout<<"enter the no";
    cin>>n;

    for(j=1;j<=2;j++)
  {  if(j==1)
      {
          str=str+"one";

      }
      if(j==2)
      {
          str=str+"two";
      }
    for(i=1;i<n%10;i++)

  {
      switch(i)
        {
        case 1:
            str= str+"one";
            break;
        case 2:
            str=str+"two";
            break;
        case 3:
            str=str+"three";
            break;
        case 4:
             str=str+"four";
             break;
        case 5:
             str=str+"five";
             break;

        }
  }
  }
  int x=str.length();
  cout<<x;
  return 0;

}

