int max(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
		return b;
	else
		return c;
}
main()
{
	int a,b,c;
	int sum;
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	if(sum>2*max(a,b,c))
		printf("yes\n");
	else
		printf("no\n");
}