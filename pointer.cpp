#include<iostream>
#include<cstring>
using namespace std;
class city
{
protected :
    char *name;
    int len;
public:
    city()
    {
        len=0;
        name=new char[len+1];
    }
    void getname()
    {
        char *s;
        s=new char[30];
        cout<<"Enter city name"<<endl;
        cin>>s;
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void printname()
    {
        cout<<name<<endl;
    }
};
int main()
{
    city *cptr[10];
    int n=1;
    int option;
    do
    {
        cptr[n]=new city;
        cptr[n]->getname();
        n++;
        cout<<"Want to enter more names?enter 1 for yes 0 for no"<<endl;
        cin>>option;
    }while(option==1);
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        cptr[i]->printname();
    }
    return 0;
}
