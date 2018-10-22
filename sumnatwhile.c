#include<stdio.h>
main()
{
int n,s=0,i;
printf("Enter the number of natural numbers :");
scanf("%d",&n);
printf("%d",s);
i=0;
do
{
printf("%d",i);
s=s+i;
i++;
}
while(i<=n);

printf("the sum is :%d",s);

}
