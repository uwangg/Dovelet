long int gcd(long int a,long int b)
{
	long int r,q;
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
	long int w,l,lcm;
	scanf("%ld%ld",&w,&l);
	lcm = (w/gcd(w,l))*(l/gcd(w,l));
	printf("%ld\n",lcm);
}