#include<stdio.h>
int f (int n);
main ()
{

	printf("sum is %d",f(5));
	return 0;
}
int f (int n){

	if (n==1)
	return 1;
	else
	return n+f(n-1);

}
