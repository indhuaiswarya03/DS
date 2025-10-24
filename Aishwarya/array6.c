#include<stdio.h>
void main()
{
int a[50],i,n,key,flag=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be search\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("In %d found at position %d\n",key,i+1);
flag=1;
break;
}
}
if(flag==0)
{
printf("Search unsucessfull");
}
}
