#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
	int n,i=0,c;
	printf("How many fibonacci terms do you need:");
	scanf("%d",&n);
	printf("Fibonacci series are:");
	for(c=1;c<=n;c++)
	{
		printf("%d\n",fibonacci(i));
		i++;
	}
	return 0;
}
int fibonacci(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return(fibonacci(n-1)+fibonacci(n-2));
}
