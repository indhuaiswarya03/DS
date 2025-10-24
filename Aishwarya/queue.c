#include<stdio.h>
#define MAX 5
int q[MAX];
int front=-1,rear=-1;




void enqueue(int value)
{
if((rear+1)%MAX==front)
{
 printf("\n Queue is full \n");
 return;
}
if(front==-1)
{
 front=0;
}

 rear=(rear+1)%MAX;

 q[rear]=value;
 printf("\n Inserted Element is %d \n",q[rear]);
}









void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("\n Queue is Empty \n");
        return;  // Add return statement to exit the function
    }
    printf("\n Deleted element is %d \n", q[front]);
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}



void search()
{
	int i,key,flag=0;
	if(front==-1&&rear==-1)
	{
	 	printf("\n Qeueue is Empty \n");
	}
	else
	{
		printf("\n Enter the element to search");
		scanf("%d",&key);
		i=front;
		printf("%d nooooooooooooooooo looop" ,q[front]);
		do
		{
			if(q[i]==key)
			{
				printf("\n Element %d found at positon %d \n",key,i+1);
                       		printf("%d if loooooooop",q[i]);
				flag=1;
				break;
			}
			i=(i+1)%MAX;
		}
		while(i!=(rear+1)%MAX);
			if(flag==0)
			{
				printf("\n Element %d not found in the queue \n",key);
			}
	}
}



void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
	 	printf("\n Qeueue is Empty \n");
	}
	printf("\n Queue Elements are:");
	i=front;
	printf("front= %d,  i=  %d ",q[front],q[i]);
	do
	{
		printf("%d , ",q[i]);
		i=(i+1)%MAX;
	}
	while(i!=(rear+1)%MAX);
	printf("\n");
}





int main()
{
int choice,item;
while(1)
{
printf("\n 1.ENQEUE \n 2.DEQUEUE \n 3.SEARCH \n 4.DISPLAY \n 5.EXIT \n");
printf("Enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n Enter the element to insert \n");
      scanf("%d",&item);
      enqueue(item); 
      break;
case 2:dequeue();
	printf("Case2 front = %d ",q[front]);
       break;
case 3:search();
       break;
case 4:display();
	printf("Case4 front = %d ",q[front]);
       break;
case 5:printf("\n Exiting \n");
       return 0;
default:printf("Invalid choice");
}
}
return 0;
}
