void swap(int* a,int* b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
main()
{
	int a[7],i;
	for(i=0 ; i<7 ; i++)
		scanf("%d",&a[i]);
	for(i=1 ; i<7 ; i++)
	{
		if(a[i-1]>a[i])
		swap(&a[i-1],&a[i]);
	}
	printf("%d",a[6]);
}