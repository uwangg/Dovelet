main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1 ; i<n ; i++)
	{
		printf("%d+",i);
		sum+=i;
	}
	printf("%d=%d",n,sum+n);
}