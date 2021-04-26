//Write a C program to swap two arrays using pointers.
#include<stdio.h>
main()
{
	int art[100],rat[100],tar[100],i,num;
	int *x,*y;
	printf("Enter size of the Arrays : ");
	scanf("%d",&num);
	printf("\nEnter elements of First Array : ");
	x=art;
	for(i=0;i<num;i++)
		scanf("%d",&art[i]);
	printf("Enter elements of Second Array : ");
	y=rat;
	for(i=0;i<num;i++)
		scanf("%d",&rat[i]);
	for(i=0;i<num;i++){
		tar[i]= *x;
		*x = *y;
		*y = tar[i];
		x++; y++;
	}
	x=art;
	printf("\nAfter Swap:\n");
	printf("\nElements of the First array are : ");
	for(i=0;i<num;i++)
		printf("%d ",*x++);
	printf("\nElements of the Second array are : ");
	y=rat;
	for(i=0;i<num;i++)
		printf("%d ",*y++);
}
