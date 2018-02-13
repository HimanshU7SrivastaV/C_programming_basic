#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"rdm.h"
void main()
{
	int n,i,j,*b;
	printf("enter the limit of array:\t");
	scanf("%d",&n);
	b=rdm(n);
	printf("array is:\t");
	for(i=0;i<n;i++)
	  printf("%d  ",b[i]);
	for(i=0;i<n;i++)
	{
		k=b[i];
		j=i-1;
		while(j>=0&&b[j]>k)
		{
			b[j+1]=b[j];
			j=j-1;
		}
		a[j+1]=k;
	}
	printf("sorted array is:\t");
	for(i=0;i<n;i++);
	scanf("%d",b[i]);
     
}
