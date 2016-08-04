main()
{
	int i,j,k,n,n2,s,re[100],sum=0;
	scanf("%d%d",&n,&k);
	for(i=1 ; i<=sqrt(n) ; i++)
	{
		if(n%i == 0)
		{
			re[sum] = i;
			if(k-1 == sum)
			{
				printf("%d\n",re[sum]);
				exit(1);
			}
			sum++;
		}
	}
	s = sum;
	for(j=s-1 ; j>=0 ; j--)
	{
		n2 = n;
		if(n2/re[j] != re[j])
		{
			re[sum] = n2/re[j];
			if(k-1 == sum)
			{
				printf("%d\n",re[sum]);
				exit(1);
			}
			sum++;
		}
	}
	printf("0\n");
}