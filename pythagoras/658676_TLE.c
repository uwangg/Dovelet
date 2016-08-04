main()
{
	int a,b,c;
	int n,k;
	scanf("%d",&c);
	for(b=1 ; b<=c ; b++)
	{
		k = c;
		k = c*c - b*b;
		for(a=1 ; a<b ; a++)
			if((int)sqrt((double)k) == a)
				printf("%d %d\n",a,b);
	}
}