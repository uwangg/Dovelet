main()
{
	int a,b;
	int i;
	scanf("%d%d",&a,&b);
	for(i=1; i<=sqrt(b); i++)
	{
		if(b%i == 0)
		{
			if(b/i+i == a)
			{
				printf("(x-%d)(x-%d)\n",i,b/i);
				break;
			}
		}
	}
	if(b/i+i != a)
		printf("impossible\n");
}