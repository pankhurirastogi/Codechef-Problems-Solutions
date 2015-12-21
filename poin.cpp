#include<iostream>
#include<string.h>
using namespace std;
int main()
{int i=0;
string s="how";
char *ptr[]={"hello","how","are","u"};
   for(i=0;i<4;i++)
   {
       if(s.compare(ptr[i])==0)
       {
           cout<<"match found at:"<<i;
       }
   }
   return 0;
}

