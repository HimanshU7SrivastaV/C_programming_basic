#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int power(int *p)
{
	int a,b;
	printf("enter the value of power u want:\t");
	scanf("%d",&b);
	a=pow(*p,b);
	printf("the resultent ans will be:\t%d",a);
}
int main()
{
	int n;
	int *p;
	printf("enter the value of n :\t");
	scanf("%d",&n);
	p=&n;

	power(p);
	getch();
	return(0);
}
