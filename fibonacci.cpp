#include<stdio.h>
#include<conio.h>
int fib(int);
int main()
{
	int n;
	printf("Enter the value for n:");
	scanf("%d",&n);
	printf("required term of fibonacci sequence=%d",fib(n));
	return 0;
}
int fib(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else return(fib(n-1)+fib(n-2));
}
