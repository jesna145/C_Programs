#include<stdio.h>
main()
{
int n,s=0,r;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s+=r;
n=n/10;
}
printf("\n sum of digits: %d ",s);
}
