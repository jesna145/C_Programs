#include<stdio.h>
main()
{
int n,i,a,b,c;
printf("enter the number of fibinacci series:");
scanf("%d",&n);
i=1;
a=0;
b=1;
while(i<=n)
{
printf("%d\t",a);
c=a+b;
a=b;
b=c;
i++;
}
return 0;
}

