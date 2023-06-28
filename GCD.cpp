#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int gcd(int , int);
int main()
{
	int a,b,g;
	printf("Enter two positive integers to find gcd:");
	scanf("%d%d",&a,&b);
	if(a==0 && b==0)
	{
		printf("INVALID!! Both numbers can`t be zer");
	}
	else 
	{
	g=gcd(a,b);
	printf("GCD(%d,%d)=%d",a,b,g);
	}
	
	
	return 0;
}
int gcd(int a, int b)
{
	
	if(b==0)
	return a;
	else
	return (gcd(b,a%b));
}
