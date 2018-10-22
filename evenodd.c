#include<stdio.h>
main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num%2==0)
{
  printf("Number is even");
}
if(num%2!=0)
{
  printf("Number is odd");
}
}
