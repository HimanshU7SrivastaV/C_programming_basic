#include<stdio.h>
#include<conio.h>
check_symmetric(int A[5][5])
{
	int i,j,c=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(A[i][j]!=A[j][i])
			break;
		}
	}
	if(A[i][j]!=A[j][i])
	printf(" not a symmetric matrix\n");
	else
	printf("symmetric matrix\n");
}
int main()
{
	int A[5][5],i,j;
	//int *p;
	printf("enter the elements of 3x3 matrix :\t");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("THE MATRIX IS :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",A[i][j]);
		}
			printf("\n");
	}
//	p]=&A[1][1];
	printf("\n\n");
	
	check_symmetric(A[5][5]);
	getch();
	return(0);
}
