main()
{
	long long int a,b,c,k;
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
	k +=b*b;
	if(k != (c*c))
		printf("impossible\n");
}