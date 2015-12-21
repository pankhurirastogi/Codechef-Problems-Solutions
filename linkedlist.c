#include<stdio.h>
#include<malloc.h>
#define null 0
struct node
{int data;
struct node *link;

}start;
void insert();
void display();
void main()
{
    int ch;
    while(1)
    {printf("enter choice \n1-insert\n2-delete\n3-display");
    scanf("%d",&ch);
      if(ch==1)
      {
          insert();
      }
      if(ch==3)
      {display();

      }
      if(ch==4)
      {
       break;
      }
    }
    getch();
}
void insert()
 struct node *ptr ,*cpst;
 char che;
    ptr=(struct node*)(malloc(sizeof(struct node)));
    printf("enter the data");
    scanf("%d",&ptr->data);
    start=ptr;
      do
      {cpt=(struct node*)(malloc(sizeof(struct node)));
       printf("enter another element");
       scanf("%d",&cpt->data);
       ptr->link=cpt;
       ptr=cpt;
       printf("do yo wanna create more nodes");
       che=getche();
      }while(che=='y');
 ptr->link=null;

}
void display()
{struct node *ptr;
ptr=start;
while(ptr!=null)
{
    printf("%d",ptr->data);
    ptr=ptr->link;
}

}
