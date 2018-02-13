#include<stdio.h>
#include<conio.h>
#include<string.h>
insertion_sort(char *b, int n)
{
	int i,j,k,key;
	for(i=0;i<n;i++)
	{
		key=*(b+i);
		j=i-1;
		while(j>=0&&*(b+j)>key)
		{
			*(b+j+1)=*(b+j);
			j=j-1;
		}
		*(b+j+1)=key;
		for(k=0;k<n;k++)
		printf("array after %d pass is:\t%d",*(b+k));		
	}
}
int main()
{
	int n;
	char *b;
	printf("enter an array:\t");
	gets(b);
	n=strlen(b);
	insertion_sort(b,n);
	getch();
	return(0);
}
