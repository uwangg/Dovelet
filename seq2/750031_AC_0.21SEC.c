main()
{
	int N,i,sum = 0;
	scanf("%d",&N);
	for(i=1 ; i<=N ; i++)
	{
		sum += i;
		printf("1..%d %d\n",i,sum);
	}
}