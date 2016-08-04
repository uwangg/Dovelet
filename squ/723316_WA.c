int gcd(int a,int b)
{
	int r,q;
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
	int w,l;
	scanf("%d%d",&w,&l);
	printf("%d\n",w*l/gcd(w,l));
}