#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
char name[20],cno[10];
int age,empid,salary;
};
int main()
{
clrscr();
int i;
employee e[5];
for(i=0;i<5;i++)
{
cout<<"Enter"<<i+1<<"employee details\n";
cout<<"Enter name\n";
cin.getline(e[i].name,20);
cout<<"Enter age\n";
cin>>e[i].age;
cout<<"Enter contact number\n";
fflush(stdin);
cin.getline(e[i].cno,10);
cout<<"Enter employee id\n";
cin>>e[i].empid;
cout<<"Enter salary\n";
cin>>e[i].salary;
}
for(i=0;i<5;i++)
{
cout<<"\nDetails of"<<i+1<<"employee is\n";
cout<<"\nName is";
cout<<e[i].name;
cout<<"\nAge is"<<e[i].age;
cout<<"\nContact number is";
cout<<e[i].cno;
cout<<"\Employee id is"<<e[i].empid;
cout<<"\nEmployee salary is"<<e[i].salary;
}
cout<<"\nEmployees having salary less than 10000\n";
for(i=0;i<5;i++)
{
if(e[i].salary<10000)
{
cout<<e[i].name;
cout<<"\nOld salary="<<e[i].salary;
cout<<"\nNew salary="<<e[i].salary +2000;
}
}
getch();
return 0;
}