#include<stdio.h>
void f (int n)
{
	if(n>0)
	{
		printf("%d",n);
		f(n-1);
	}
}
int main ()
{
	f(5);
	return 0;
}
