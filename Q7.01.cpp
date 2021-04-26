//Write a C program to add two numbers using pointers.
#include<stdio.h>
main()
{
	int n1,n2,sum,*i,*j;
	printf("Enter 1st number : ");
	scanf("%d",&n1);
	printf("Enter 2nd number : ");
	scanf("%d",&n2);
	i = &n1;
	j = &n2;
	sum = *i + *j;
	printf("\nSum = %d",sum);
}
