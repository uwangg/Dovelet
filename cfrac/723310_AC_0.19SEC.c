main()
{
	int n,m,temp;
	scanf("%d%d",&n,&m);
	while(n < m)
	{
		if(n == 1)
		{
			printf("%d\n",m);
			break;
		}
		if(m%n == 0)
		{
			printf("%d\n",m/n);
			break;
		}
		printf("%d ",m/n);
		temp = m%n;
		m = n;
		n = temp;
	}
}