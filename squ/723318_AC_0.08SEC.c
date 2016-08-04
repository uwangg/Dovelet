long long int gcd(long long int a,long long int b)
{
	long long int r,q;
	while(1)
	{
		q = a/b;
		r = a%b;
		if(r == 0)
			break;
		a = b;
		b = r;
	}
	return b;
}
main()
{
	long long int w,l,lcm;
	scanf("%lld%lld",&w,&l);
	lcm = (w/gcd(w,l))*(l/gcd(w,l));
	printf("%lld\n",lcm);
}