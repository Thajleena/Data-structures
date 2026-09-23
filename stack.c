#include<stdio.h>
#include<stdlib.h>
#define  SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(int*),opt,item,p;
void display();
do
{
printf("\n1.Push\n2.pop\n3.display\n4.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1: printf("Enter item:");
        scanf("%d",&item);
        push(item);
        break;
case 2: item=pop(&p);
        if(p!=-1)
        printf("Poped value=%d\n",item);
        break;

case 3: printf("Stack items are: ");
        display();
        break;
case 4: exit(0);
}
}while(9);
}
void push(int x)
{
if(sp==SIZE-1)
{
printf("Stack is full");
return;
}
else
{
stk[++sp]=x;
return;
}
}
int pop(int *p)
{
if(sp==-1)
{
printf("Stack is empty");
*p=-1;
}
else
return stk[sp--];
}
void display()
{
int i,top;
top=sp;
for(i=0;i<=top;i++)
{
  printf("%d\t",stk[i]);
 
  }
   printf("\n");
  return;
}


