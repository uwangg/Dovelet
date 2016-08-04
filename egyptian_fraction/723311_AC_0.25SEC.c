main()
{
	int a,re=0;
	int n,m;

	scanf("%d%d",&n,&m);
	while(n != 1)
	{
		if(m%n == 0)
		{
			m = m/n;
			n = 1;
			break;
		}
		a = (m-m%n)/n+1;
		if(a == re)
			a++;
		n = n*a - m;
		m = m*a;
		re = a;
		printf("1/%d ",a);
	}
	printf("1/%d",m);
	printf("\n");
}