//Write a C program to input and print array elements using pointer.
#include<stdio.h>
main()
{
	int arr[100],i,*use=arr,num;
	printf("Enter size of the Array : ");
	scanf("%d",&num);
	printf("Enter elements one by one : ");
	for(i=1;i<=num;i++)
		scanf("%d",use++);
	use=arr;
	printf("\nElements of the array are : ");
	for(i=1;i<=num;i++)
		printf("%d ",*use++);
}
