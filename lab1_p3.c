#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int search(int *p)
{
	int k,i;
	printf("enter the element that you have to be find :\t");
	scanf("%d",&k);
	for(i=0;i<5;i++)
	{
	    if(p[i]==k)
		    printf("element is found\n");
		else
	     	printf("element is not found\n");	
	}
}
int main()
{
	int a[5],i,k;
	int *p;
	p=(int *)malloc(5*sizeof(int));
	printf("enter the 5 elements:\t");
	for(i=0;i<5;i++)
	{
		scanf("%d",&p[i]);
	}
	search(p);
	getch();
	return(0);
}
