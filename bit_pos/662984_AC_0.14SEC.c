main()
{
	int n,cnt=0,a[50],i,k=0;
	scanf("%d",&n);
	while(1)
	{
		a[cnt]=n%2;
		if(a[cnt]==1)
			printf("%d ",cnt);
		if(n==0)
			break;
		n=n/2;
		cnt++;
	}
}