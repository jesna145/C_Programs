#include<stdio.h>
main()
{
int n,i,r;
printf("enter the number :");
scanf("%d",&n);
printf("enter the range: ");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
printf("%d * %d = %d\n ",i,n,i*n);
}
}
