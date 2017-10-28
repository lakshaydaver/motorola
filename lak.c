#include<stdio.h>
void main()
{
int n,a;
printf("enter the limit");
scanf("%d",&a);
n=a/10;

switch(n)
{
case 2:
printf("happy");
break;
case 20:
printf("sad");
break;
default:
printf("yoyo");
}
}
