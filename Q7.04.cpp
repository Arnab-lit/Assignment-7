//Write a C program to copy one array to another using pointers.
#include<stdio.h>
main()
{
	int mac[100],hine[100],i,num;
	int *war=mac,*raw=hine;
	printf("Enter size of the Array : ");
	scanf("%d",&num);
	printf("Enter elements one by one : ");
	for(i=0;i<num;i++)
		scanf("%d",war++);
	war=mac;
	for(i=0;i<num;i++)
		raw = war;
	printf("\nElements of the Second array are : ");
	for(i=0;i<num;i++)
		printf("%d ",*raw++);
}
