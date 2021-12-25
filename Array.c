#include<stdio.h>
void main()
{
	int sum=0,i,j,ar[3][3],*ptr,*ptr1,*ptr2;
	printf("Enter Elements Of The 3x3 matrix:");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   scanf("%d",&ar[i][j]);	
		}
		
	}
	printf("The Matrix is:\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("%d ",ar[i][j]);	
		}
		printf("\n");		
	}
	printf("Sum Of Diagonal Elements i.e.,\nElement[0][0],Element[1][1],Element[2][2]:\n");
	ptr=&ar[0][0];
	ptr1=&ar[1][1];
	ptr2=&ar[2][2];
	sum=*ptr+*ptr1+*ptr2;
	printf("%d",sum);
}
