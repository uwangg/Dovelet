main()
{
	int n,i=1,k;
	scanf("%d",&n);
	while(1)
	{
		k=n/(int)pow(2,(double)i);
		if(k%2==1)
		{
			printf("%d %d\n",k,i);
			break;
		}
		i++;
	}
}