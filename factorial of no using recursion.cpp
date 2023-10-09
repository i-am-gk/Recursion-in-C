#include<stdio.h>
int fact(int num);
 main()
 {
int a;
printf("enter a number");
scanf("%d",&a);
printf("factorial is = %d\n",fact(a));
}
int fact (int num)
{
if (num==0||num==1)
return 1;
else
return(num*fact(num-1));
}
