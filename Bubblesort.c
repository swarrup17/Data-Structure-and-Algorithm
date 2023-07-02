#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The elements after bubble sort are:\t");
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
	printf("The elements before bubble sort are:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",num[i]);
	}
	printf("\n");
	bubblesort(num,n);
	return 0;
}
