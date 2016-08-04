int f91(int n)
{
	if(n<=100)
		return f91(n+11);
	else
		return n-10;
}
main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		printf("%d\n",f91(n));
	}
}