#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;};
struct node*head=NULL;
void enqueue()
{
struct node*temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n No space Available\n");
return;
}
newnode->link=NULL;
printf("\nEnter the element to insert:\n");
scanf("%d",&newnode->data);
if(head==NULL){
head=newnode;
}
else{
while(temp->link!=NULL){
temp=temp->link;}
temp->link=newnode;}
printf("\n%d Element inserted successfully\n",newnode->data);
}
void dequeue()
{
struct node*temp=head;
if(head==NULL){
printf("\nNo Elements\n");
return;
}
printf("\n%d is deleted\n",temp->data);
head=temp->link;
free(temp);}
void display()
{
struct node*temp=head;
if(head==NULL){
printf("\nNo Elements");
return;
}
printf("\nElements in Queue are\n");
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->link;
}}
void search()
{
struct node*temp=head;
int key,pos=1,found=0;
if(head==NULL){
printf("\nQueue Empty\n");
return;
}
printf("\nEnter the element to search\n");
scanf("%d",&key);
while(temp!=NULL){
if(temp->data==key)
{
printf("\n%d Element found at %d\n",temp->data,pos);
found=1;}
temp=temp->link;
pos++;
}
if(!found){
printf("\nElement not found");
}}
void main()
{
int choice;
do{
printf("\n******QUEUE******\n");
printf("\n1.Enqueue() \n2.Dequeue() \n3.Display() \n4.Search() \n5.Exit");
printf("\nEnter the choice\n");
scanf("%d",&choice);
switch(choice){
case 1: enqueue();
break;
case 2: dequeue();
break;
case 3: display();
break;
case 4: search();
break;
case 5: printf("\nExit\n");
break;
default :printf("Enter a valid choice");
break;
}}
while(choice!=5);
}

