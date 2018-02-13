#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"rdm.h"
void quick_sort(int *b,int n)
{
	
}

int main()
{
	int n,i,j;
	int *b;
	printf("enter the limit of array:\t");
	scanf("%d",&n);
	b=(int *)malloc(n*sizeof(int));
	printf("enter the elements:\t");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",b[i][j]);
		}
	}
	quick_sort(b,n);
	getch();
	return(0);
}	
