#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
public:
    void getdata(int a,float b);
    void putdata(void)
    {
        cout<<"number"<<number;
        cout<<"cost"<<cost;
    }

};
void item :: getdata(int a,float b)
{
    number=a;
    number =b;
}
int main()
{    int a;
     float b;
    item x;
    cout<<"enter data";
    cin>>a;
    cin >>b;
    x.getdata(a,b);
    x.putdata();
    return 0;

}
