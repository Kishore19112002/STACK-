#include <stdio.h>
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void push()
{
 int a;
 printf("ENTER THE ELEMENT TO PUSH\n");
 scanf("%d",&a);
 if(top==N)
 {
 printf("STACK IS OVERFLOW");
 }
 else
 {
 top+=1;
 stack[top]=a;
 }
}
void pop()
{
 if(top>=0)
 {
 printf("POPED ELEMENT : %d",stack[top]);
 top--;
 }
 else
 {
 printf("STACK IS UNDERFLOW");
 }
}
void topelemnt()
{
if(top!=-1){
 printf("THE TOP ELEMENT: %d",stack[top]);}
 else
 {
 printf("the stack is empty");
}
}
void main()
{
 int choice,b=1;
 
 while(b==1)
 {printf("\nENTER YOUR CHOICE :");
 printf("\n1.PUSH\n2.POP\n3.TOP\n4.EXIT\n");
 scanf("%d",&choice);
 
 switch (choice)
 {
 case 1:
 push();
 break;
 case 2:
 pop();
 break;
 case 3:
 topelemnt();
 break;
 case 4:
 b=0;
 break;
 default:
 printf("ENTER THE CORRECT CHOICE");
 break;
 }
 }
}
