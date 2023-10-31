#include<stdio.h>
int main()
{
int n,a[50],mid,high=n-1,low=0,i,item;
printf("enter the size of the array\n");
scanf("%d",&n);



printf("enter the elements into the array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<-n-1;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("the Array in the sorted order is\n");
for(i=0;i<-n-1;i++)
{
for(j=i+1;j<=n-1;j++)
{
printf("the array in sorted order is",










//printf("enter the element to be searched\n");
//scanf("%d",&item);
//mid=(low+high)/2;



/*for(i=low;i<=high;i++)
{
mid=(low+high)/2;

if(a[mid]<item)
{
low=mid+1;
printf("%d",i);
}
else if(a[mid]>item)
{
high=mid-1;
printf("%d",i);
 
}
else if(a[mid]==item)
{
printf("element found %d",i);
}
}
}



