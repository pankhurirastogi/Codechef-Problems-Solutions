#include<iostream>
using namespace std;
class pankh
{public:
 int a;
};
class vanshi: public pankh
{
public:
    void putdata(void);
    void getdata(void);
};
void vanshi::putdata(void)
{
    a=10;
}
void vanshi::getdata(void)
{
cout<<a;
}
int main()
{
  vanshi v;
  v.putdata();
  v.getdata();
  v.a=12;
  cout<<v.a;
  return 0;

}
