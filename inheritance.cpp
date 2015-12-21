#include<iostream>
using namespace std;
class parent
{
private :
    int p;
public :
    void getdata(int x);
    void put data(void);
};
void parent::getdata(int x)
{
    p=x;
}
void putdata(void)
{
    cout<<p;
}

class  child : public parent
{
 public :
     int q;
};
int main()
{
    child ch;
    ch.p=10;
    cout<<ch.p;
    ch.q=20;
    cout<<ch.q;
    return 0;
}

