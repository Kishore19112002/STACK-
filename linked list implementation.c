#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
void push()
{
int val;
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("\nENTER THE DATA TO PUSH : \n");
scanf("%d",&val);
new->data=val;
new->next=top;
top=new;
}
void pop()
{
struct node *temp;
temp=top;
if(top==NULL)
{
printf("\nTHE STACK IS EMPTY\n");
}
else
{
printf("\nPOPED ELEMENT : %d\n",top->data);
top=top->next;
free(temp);
}
}
void tpele()
{
if(top!=NULL)
{
printf("\nTOP ELEMENT : %d\n",top->data);
}
else
{
printf("\nTHE STACK IS EMPTY\n");
}
}
void main()
{
int choice,a=1;
while(a==1)
{
printf("\nENTER YOUR CHOICE\n");
printf("1.PUSH\n2.POP\n3.TOP\n4.EXIT\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
tpele();
break;
case 4:
a=0;
break;
default:
printf("WRONG CHOICE");
}
}
}
