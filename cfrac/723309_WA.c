main()
{
	int n,m,temp,i=0;
	scanf("%d%d",&n,&m);
	while(n < m)
	{
		if(n == 1)
		{
			printf("%d\n",m);
			break;
		}
		printf("%d ",m/n);
		temp = m%n;
		m = n;
		n = temp;
		i++;
	}
}