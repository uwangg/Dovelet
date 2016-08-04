main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a-b == 2)
	{
		if(a%2 == 0)
			printf("%d",2*a-2);
		else
			printf("%d",2*a-3);
	}
	else if(a == b)
	{
		if(a%2 == 0)
			printf("%d",2*a);
		else
			printf("%d",2*a-1);
	}
	else
		printf("No Number");
}