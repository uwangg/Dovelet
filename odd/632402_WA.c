void swap(int* a,int* b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
main()
{
	int a[7],i,sum=0,n[7],k=0;
	for(i=0 ; i<7 ; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2!=0)
		{
			n[k]=a[i];
			sum+=a[i];
			k++;
		}
	}
	for(i=0 ; i<k ; i++)
	{
		if(n[i]<n[i+1])
			swap(&n[i],&n[i+1]);
	}
	printf("%d\n%d",sum,n[k-1]);
}