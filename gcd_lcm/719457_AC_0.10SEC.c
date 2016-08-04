main()
{
	int a,b,r,q,c,d;
	scanf("%d%d",&a,&b);
	c = a;
	d = b;
	while(1)
	{
		q=a/b;
		r=a%b;
		if(r == 0)
			break;
		a=b;
		b=r;
	}
	printf("%d %d\n",b,(c/b)*d);
}