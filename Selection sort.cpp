#include<stdio.h>
void selectionsort(int a[],int n)
{
	int i,j,temp,si;
	for(i=0;i<n-1;i++)
	{
		si=i;
		for(j=i;j<n;j++)
		{
			if(a[si]>a[j])
			{
				si=j;
			}
		}
			if (si!=i)
			{
				temp=a[i];
				a[i]=a[si];
				a[si]=temp;
	    	}
	}
	printf("The elements after selection sort are:\t");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
}

int main()
{
	int n;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	int num[n],i;
    printf("Enter the total number of elements in array:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&num[i]);
	}
	printf("The elements before selection sort are:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",num[i]);
	}
	printf("\n");
	selectionsort(num,n);
	return 0;
}
