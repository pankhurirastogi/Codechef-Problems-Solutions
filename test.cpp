#include<iostream>
using namespace std;
int main()
{   int n;


    while(1)
    {
       cin>>n;
        if(n!=42&&n<100)
            cout<<n<<"\n";
        if(n==42)
            break;

    }
    return 0;
}
