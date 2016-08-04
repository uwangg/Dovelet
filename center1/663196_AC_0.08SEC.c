main()
{
	int n,i,k=0,sum;
	scanf("%d",&n);
	sum = n*(n-1)/2;
	i=n+1;
	while(sum>k)
	{
		k+=i;
		i++;
	}
	if(k==sum)
		printf("O");
	else
		printf("X");
}