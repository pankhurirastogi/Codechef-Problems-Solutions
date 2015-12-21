#include<iostream>
using namespace std;
class sample
{
   int a,b;
   public:
   void getdata(int x,int y=10);
   void putdata();
};
void sample::getdata(int x,int y)
{
    a=x;
    b=y;
}
void sample::putdata()
{
   cout<<"Product is: "<<a*b<<cout;
}
int main()
{
    sample s1,s2;
    s1.getdata(10,5);
    s2.getdata(10);
    s1.putdata();
    s2.putdata();
    return 0;
}
