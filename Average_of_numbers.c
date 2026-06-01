#include<stdio.h>
int main()
{
int a,b,c,d,e;
float avg,sum;
printf("enter 5 numbers");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
avg=sum/5;
printf("average=%f",avg);
return 0;    
}