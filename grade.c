#include<stdio.h>
main()
{
int m1,m2,m3,m4,m5,total,p;
printf("enter the marks of 5 subjects:");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
if((m1<30)||(m2<30)||(m3<30)||(m4<30)||(m4<30)||(m5<30))
   {
      printf("failed...");
   }
else
  {
    total=m1+m2+m3+m4+m5;
    p=(total/5);
    printf("Total: %d\n",total);
    printf("Percentage:%d\n",p);


       if(total>450)
          {
            printf("A grade");
          }
       else if(total>400)
          {
            printf("B Grade");
          }
      else if(total>350)
          {
            printf("C Grade");
          }
      else if(total>300)
          {
            printf("D Grade");
          }

       else
          {
            printf("E Grade");
          }
    }
}
