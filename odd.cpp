#include<iostream>
using namespace std;
class oddchk
{
    int a;
    public:
    void getdata(void);
    void chckodd(void);

};
void oddchk :: getdata(void)
{
    cout<<"enter the data ";
    cin>>a;
}
void oddchk :: chckodd(void)
{
  if(a%2==0)
        cout<<"even no";
  else
    cout<<"odd no";

}
int main()
{
    oddchk o;
    o.getdata();
    o.chckodd();
    return 0;
}
