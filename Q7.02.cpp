//Write a C program to a swap two numbers using pointers.
#include<stdio.h>
main()
{
	int n1,n2,show,*i,*j;
	printf("Enter 1st number : ");
	scanf("%d",&n1);
	printf("Enter 2nd number : ");
	scanf("%d",&n2);
	i = n1;
	j = n2;
	show = *i;
	*i = *j;
	*j = show;
	printf("\nAfter Swap :");
	printf("\nFirst number :- %d\nSecond number :- %d",*i,*j);
}
