#include<stdio.h>
main()
{
int a,b,c,largest;
printf("enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
largest=a;
if(b>largest)
{
   largest=b;
}
if(c>largest)
{
  largest=c;
}
printf("%d is largest",largest);
}

