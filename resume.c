#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int check(int *p)
{
	int i,n,c=0;
	for(i=1;i<n;i++)
	{
		if(*p%i==0)
		c=c+1;
	}
    return(c);
}
int main()
{
	int n,i,c;
	int *p;
	printf("enter the no. that you have to check:\t");
	scanf("%d",&n);
	p=&n;
	check(p);
	if(c==1)
    	printf("number is prime number\n");
	else 
	    printf("number is not the prime number\n");
	getch();
	return(0);
}
