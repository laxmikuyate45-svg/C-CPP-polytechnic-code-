#include<stdio.h>
int main ()
{

int a[100],i,n,pos,x;
printf("\nenter size of array:");
scanf("%d",&n);
printf("\nenter array elements:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("\nenter position to insert");
scanf("%d",&pos);
printf("\nenter element to insert");
scanf("%d",&x);
for (i=n-1;i>=pos;i--)
{
a[i+1]=a[i];

}
a[pos]=x;
n++;
printf("\narray element after insertion");
for (i=0;i<n;i++)
{
printf("\n%d\t",a[i]);
}
return 0;
}
