#include<iostream>
using namespace std;
class abc;
class xyz
{
    int a;
   public:
       xyz(int u)
       {
           a=u;
       }
     friend void mean(xyz x,abc c);

};
class abc
{
    int b;
public:
    abc(int v)
    {
        b=v;
    }
    friend void mean(xyz x, abc c);
};
void mean(xyz x,abc c)
{
    cout<<"mean is"<<(x.a+c.b)/2;
}
int main()
{  xyz x(8);
   abc c(10);
   mean(x,c);
   return 0;

}
