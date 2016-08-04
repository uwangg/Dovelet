int f(int n)
{
	if(n == 1 || n==0)
		return 1;
	return n*f(n-1);
}
main()
{
	int i,j;
	double e;
	printf("n e\n- -----------\n");
	for(i=0 ; i<=9 ; i++)
	{
		e=0;
		printf("%d ",i);
		for(j=0 ; j<=i ; j++)
			e+=1.0/(double)f(j);
		printf("%.9lf\n",e);
	}
}