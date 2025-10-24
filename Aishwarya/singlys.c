#include<stdio.h>
#include<stdlib.h>



struct node
{
int data;
struct node *link;
};
struct node *top=NULL;




void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n NO space available \n");
return;
}
newnode->link=NULL;
printf("\n Enter the value to insert \n");
scanf("%d",&newnode->data);
if(top==NULL)
{
top=newnode;
}
else
{
newnode->link=top;
top=newnode;
}
printf("\n Element inserted %d",newnode->data);
}






void pop()
{
struct node *temp=top;
if(top==NULL)
{
printf("\n Stack underflow \n");
return;
}
printf("\n Value deleted %d \n",temp->data);
top=temp->link;
free(temp);
}




void peek()
{
struct node *temp=top;
if(top==NULL)
{
printf("\n Stack underflow \n");
return;
}
printf("Top element is %d",temp->data);
} 




void display()
{
struct node *temp=top;
if(top==NULL)
{
printf("\n No Elements");
return;
}
printf("\n Element in the stack \n");
while(temp != NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}


void search()
{
struct node *temp=top;
int found=0,val,pos=0;
if(top==NULL)
{
printf("\n No elements \n");
return;
}
printf("\n ENTER THE VALUE TO SEARCH"); 
scanf("%d",&val);
while(temp!=NULL)
{
if(temp->data==val)
{
printf(" %d Value found at %d location \n",temp->data,pos+1);
found=1;
}
pos++;
temp=temp->link;
}
if(!found)
{
printf("\n Value %d not exist",val);
}
}

int main()
{
int choice;
do
{
printf("\n 1.PUSH \n 2.POP \n 3.PEEK \n 4.DISPLAY \n 5.SEARCH \n 6.Exit \n ");
printf("\n Enter the choice \n");
scanf("%d",&choice);
switch(choice) 
{
case 1: push();
       break;
case 2:pop();
       break;
case 3:peek();
       break;
case 4: display();
       break;
case 5: search();
       break;
case 6: printf("\n Exiting program");
       exit(0);
default: printf("Enter invalid choice \n ");
}
}while(choice!=6);
}


