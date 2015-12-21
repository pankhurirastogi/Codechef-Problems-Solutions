#include<iostream>
using namespace std;
class complexno
{
    float x,y;
public:
    complexno(){}
    complexno(int real,int img)
    {
        x=real;
        y=img;
    }
    complexno operator+(complexno);
    void display();
};
complexno complexno::operator+(complexno c)
{
    complexno temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}
void complexno::display()
{
    cout<<x<<" j "<<y<<endl;
}
int main()
{
    complexno C1,C2,C3;
    C1=complexno(2.5,3.5);
    C2=complexno(1.5,4);
    C3=C1+C2;
    cout<<"C1 = ";C1.display();
    cout<<"C2 = ";C2.display();
    cout<<"C3 = ";C3.display();
    return 0;
}
