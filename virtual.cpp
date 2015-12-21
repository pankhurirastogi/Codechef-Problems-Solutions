#include<iostream>
using namespace std;
class base
{
protected:
    int b;
public:

     base(int a)//constructor has no return type
    {
        b=a;
    }
    void display(void)
    {
        cout<<"base b="<<b;
    }

};
class derived:public base
{
    int d;
    derived (int x)
    {

        d=x;

    }
    void display(void)
     {cout<<"base content b="<<b<<endl;
     cout<<"derived content"<<d<<endl;

     }
};
int main()
{
    base *ptr;
    base yo=base(40);
    ptr=&yo;
    ptr->display();
    derived to(56);
    ptr=&to;
    to->display();
    return 0;
}
