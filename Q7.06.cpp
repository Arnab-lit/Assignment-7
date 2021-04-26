//Write a C program to reverse an array using pointers.
#include <stdio.h>
main() 
{
	int num,i,art[100];
	int *fool;
	printf("Enter size of array: ");
	scanf("%d",&num);
	fool = &art[0];
	printf("Enter elements one by one : ");
	for(i=0;i<num;i++)
		scanf("%d",fool++);
	fool = &art[num - 1];
	printf("\nElements of Reverse Array is: ");
	for(i=num;i>0;i--)
		printf("%d ",*fool--);
}
