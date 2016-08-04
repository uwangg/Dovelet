main()
{
	int i,j,n,n2,s,re[100],sum=0;
	int p_s=0,p_m=1;
	scanf("%d",&n);
	for(i=1 ; i<=sqrt(n) ; i++)
	{
		if(n%i == 0)
		{
			re[sum] = i;
			p_s += re[sum];
			p_m *= re[sum];
			p_m = p_m%10;
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
			p_s += re[sum];
			p_m *= re[sum];
			p_m = p_m%10;
			sum++;
		}
	}
	for(i=0 ; i<sum ; i++)
		printf("%d ",re[i]);
	printf("\n%d\n%d\n%d\n",sum,p_s,p_m);
}