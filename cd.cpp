#include<iostream>
using namespace std;
int count=0;
class test
{
 public:
     test()
     {
         count++;
         cout<<"Constructor invoked.Object number "<<count<<" created"<<endl;
     }
     ~test()
     {
         cout<<"Constructor invoked.Object number "<<count<<" destroyed"<<endl;
         count--;
     }
};
int main()
{
    test t1,t2,t3;
    return 0;
}
