main()
{
	long long int a,b,c,tmp;
	long long int re;
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a>b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(b>c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	re = a*a+b*b;
	if(re == c*c)
		printf("right\n");
	else if(re > c*c)
		printf("acute\n");
	else
		printf("obtuse\n");
}