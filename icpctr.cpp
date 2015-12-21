#include<iostream>
using namespace std;
int main()
{ long long int i,sum=0;
 long long int myar[100000];
 for(i=0;i<100;i++)
 {
 myar[i]=i;
 }
  for(i=0;i<1000;i++)
 {
 sum=sum+myar[i];
 }

 cout<<sum;
return 0;
}
