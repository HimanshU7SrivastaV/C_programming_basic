#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,n,y;
	char a[20];
	char *p;
	printf("ENTER THE VALUE OF STRING:\t");
	scanf("%s",&a);
	printf("you entered: %s",a);
  /*  for(i=0;i!='\0';i++)
    {
		printf("%c ",a);
		n=n+1;
	} */
	printf("\n");
	n=strlen(a);
	printf(" length of string is :  %d",n);
	p=&a[0];
	y=strcpy(p,p[6]);
	printf("correct one is: %s",a);
	getch();
	return(0);
}
