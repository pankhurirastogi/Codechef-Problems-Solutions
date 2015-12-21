#include<iostream>

int area (int,int);
float area(float);
int main()
{

    cout <<"area for rectangle"<<area(10,2);
    cout<<"area for circle"<<area(6.5);
    return 0;

}

int area (int a,int b)
{
    return a*b;
}
float area(float c)
{
    return 3.14*c*c;
}
