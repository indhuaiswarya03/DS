#include<stdio.h>
#define MAX 10
int s[MAX];
int top=-1;



void push(int item)
{
if(top==MAX-1)
{
 printf("\n Stack Overflow");
 return;
}
else
{
++top;
s[top]=item;
printf("\n Inserted Element is %d ",item);
}
}





void pop()
{
if(top==-1)
{
 printf("\n Stack Underflow");
 return;
}
else
{
printf("\n %d is deleted",s[top]);
top--;    
}
}




void peek()
{
if(top==-1)
{
 printf("\n Stack Underflow");
 return;
}
else
{
  printf("\n Top of the element is %d",s[top]);
}
}




void display()
{
if(top==-1)
{
 printf("\n Stack Underflow");
 return;
}
else
{
printf("\n The elements in stack are:");
for(int i=top;i>=0;i--)
{
    printf("%d\n",s[i]);
}
}
}




int main()
{
int choice,value;
while(1)
{
printf("\n 1.PUSH \n 2.POP \n 3.PEEK \n 4.DISPLAY \n 5.EXIT \n ");
printf("\n Enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\n Enter the value to insert \n");
       scanf("%d",&value);
       push(value);
       break;
case 2:pop();
       break;
case 3:peek();
       break;
case 4:display();
       break;
case 5:printf("\n Exiting program");
       return 0;
default:printf("Enter invalid choice \n ");
}
}
return 0;
}
