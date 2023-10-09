#include<stdio.h>
int fact(int n);
main()
{
	int no;
	printf("Enter a non negative number\n");
	scanf("%d",&no);
	if(no<0)
	{
		printf("Wrong input, Kindly enter positive no\n");
	}
	else
	printf("Factorial of %d is %d",no,fact(no));
}
int fact(int n){
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	return n*fact(n-1);
}
