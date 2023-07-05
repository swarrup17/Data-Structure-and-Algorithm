#include<stdio.h>

void insertsort(int a[], int n)
{
	int i, j, temp;
	for (i = 1; i < n ; i++)
	 {
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		if(j+1!=i)
		{
		a[j+1]=temp;
		}
	}
}
	
int main(){
	int i,n, a[50];
	printf("How many numbers do you want to sort:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
   {
		printf("Enter number %d=",i+1);
	scanf("%d",&a[i]);
   }
printf("Your numbers before sorting are:\n");
	for(i=0;i<n;i++) 
	{
		printf("%d \t",a[i]);
   }
insertsort(a,n);
printf("\nYour numbers after sorting are:\n");
	for(i=0;i<n;i++) 
	{
		printf("%d \t",a[i]);
    }
return 0;
}
