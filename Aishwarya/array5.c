#include<stdio.h>
void main()
{
int a[50],i,n,p,item;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position");

scanf("%d",&p);

n=n-1;
item=a[p-1];
printf("The deleted element is %d",item);
for(i=p-1;i<n;i++)
{
a[i]=a[i+1];
}
printf("The new array is\n");
{
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
}
