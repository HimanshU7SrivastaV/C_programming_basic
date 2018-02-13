#include<stdio.h>
#include<conio.h>
int binary(int n)
{
	int j,i,a[20];
	for(i=n;i!=0;i++)
	{
		a=n;
		a[i++]=a%2;
		a=a/2;	
	}
	printf("the decimal and binary number is : \n\t decimal\t bianry\n");
	for(j=i-1;j>0;j--)
	printf("\t%d\t%d",n,n[j]);
}
int main()
{
	int n;
	printf("enter the value of n:\t");
	scanf("%d",&n);
	binary(n);
	getch();
	return(0);
}
