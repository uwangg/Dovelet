main()
{
	long long int a=0,b,c;
	int n,k;
	scanf("%lld",&c);
	for(b=1 ; b<=c ; b++)
	{
		k = c;
		k = c*c - b*b;
		for(a=1 ; a<b ; a++)
		{
			if(k == a*a)
			{
				printf("%lld %lld\n",a,b);
				break;
			}
		}
		if(k == a*a)
			break;
	}
	if((a*a+b*b) != (c*c))
		printf("impossible\n");
}