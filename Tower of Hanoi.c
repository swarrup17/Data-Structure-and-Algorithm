 // Tower of Hanoi program in C using Recursion
#include <stdio.h>
void toH(int n, char rodA, char rodC, char rodB)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c",rodA ,rodC );
		return;
	}
	toH(n-1, rodA, rodB, rodC);
	printf("\n Move disk %d from rod %c to rod %c", n, rodA, rodC);
	toH(n-1, rodB, rodC,rodA);
}

int main()
{
	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	toH(no_of_disks, 'A','C','B'); 
	return 0;
}

