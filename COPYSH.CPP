#include<iostream.h>
#include<conio.h>
class abc
{
int a,b;
public:
abc(int x,int y)
{
a=x;
b=y;
}
abc(abc &p)
{
a=p.a;
b=p.b;
}
void show()
{
cout<<"a is "<<a<<endl;
cout<<"b is "<<b<<endl;
}
};
int main()
{
clrscr();
abc c1(10,20);
abc c2(c1);
c1.show();
c2.show();
getch();
return 0;
}