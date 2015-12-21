#include<iostream>
using namespace std;
int main()
{int size=20;
   char city[20];
   cout<<"enter city name";
   cin>>city;
   cout<<"city name"<<city<<"\n\n";
   cout<<"enter city name again \n";
   cin.getline(city,size);
   cout<<"city name now:"<<city<<"\n\n";
   cout<<"enter another city name \n";
   cin.getline(city,size);
   cout<<"now city name:"<<city<<"\n\n";
   return 0;

}
