#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int Q[SIZE];
int front=0,rear=0,item;
void main()
{
void enqueue(int);
int dequeue(int*),opt,p;
void display();
do
{
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1: printf("Enter an item:");
        scanf("%d",&item);
        enqueue(item);
        break;
case 2: item=dequeue(&p);
        if(p!=-1)
        printf("Poped value:%d\n",item);
        break;
case 3: display();
        break;
case 4: exit(0);
}
}while(9);
}
void enqueue(int x)
{
int temp;
temp=(rear+1)%SIZE;
if(temp==front)
 printf("Queue is full\n");
else
{
rear=temp;
Q[rear]=x;
}
return;
}
int dequeue(int *p)
{
if(front==rear)
{
 printf("Queue is empty\n");
 *p=-1;
}
 else
 {
 front=(front+1)%SIZE;
 return Q[front];
 }
 }
 void display()
 {
 int i;
 if(front==rear)
  printf("Queue is empty\n");
else
{
i=(front+1)%SIZE;
while(1)
{
printf("%d\t",Q[i]);
if(i==rear)
break;
i=(i+1)%SIZE;
}
printf("\n");
}
return;
}

