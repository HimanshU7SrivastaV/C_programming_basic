#include<stdio.h>
#include<conio.h>
int main()
{
	int  a[20],i,j,n,t;
	printf("ENTER THE NUMBER\n");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS IN THE ARRAY\t");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
    }
	printf("LARGEST ELEMENT IS:\t");
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	   {
			if(a[i]<a[j])
			t=a[j];
			a[j]=a[i];
			a[i]=t;			
	   }
	}
	printf("%d ",a[i]);
	getch();
	return(0);
}

