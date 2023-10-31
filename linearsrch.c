#include<stdio.h>

int main()
{
int item,a[30],i,n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements into the array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}

printf("enter the element to be searched\n");
scanf("%d",&item);
for(i=0;i<=n-1;i++)
{
if (a[i]==item)
{
printf("item found at %d",i);
break;
}
else
{
printf("item not found");
}
}
}



