int * Rdm(int n)
{
	int *a,i;
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
		
	}
	return a;
}
