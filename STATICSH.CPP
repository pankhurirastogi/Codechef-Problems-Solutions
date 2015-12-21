#include<iostream>
using namespace std;
class test
{
int code;
static int count;
public:
void setcode()
{
code=++count;
}
void showcode()
{
cout<<"Object no is "<<code<<endl;
}
static void showcount()
{
cout<<"Count is "<<count<<endl;
}
};
int test::count;
int main()
{
test t1,t2;
t1.setcode();
t2.setcode();
t1.showcode();
t2.showcode();
test::showcount();
test t3;
t3.setcode();
t3.showcode();
test::showcount();

return 0;
}
