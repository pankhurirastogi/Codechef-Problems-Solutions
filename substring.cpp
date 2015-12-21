#include<iostream>
using namespace std;
class objptr
{public:
    int x;
    int y;
    void writ(void)
    {
        cout<<"yoyo";
    }

};
int main()
{
    objptr ptr=new objptr;
    cout<<"enter the value of x";
    cin>>ptr->x;
    cout<<"enter the value of y";
    cin>>ptr->y;
    cout<<ptr->x<<endl;
    cout<<ptr->y<<endl;
    return 0;
}
