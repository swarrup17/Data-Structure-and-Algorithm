#include <stdio.h>
void shellSort(int array[], int n) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() {
  int n,i;
  printf("How many number do you  need \n");
  scanf("%d",&n);
  int data[n];
  	printf("Enter the unordered elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
  printf("Given array is \n");
  for(i=0;i<n;i++)
	{
		printf("%d\t",data[i]);
	}
	printf("\n");
  shellSort(data, n);
  printf("Sorted array: \n");
  printArray(data,n);
}
