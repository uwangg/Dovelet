main()
{
	int a,b,re=0;
	int i;
	scanf("%d%d",&a,&b);
	re = b-a+1;
	for(i=a ; i<=b ; i++)
		if(sqrt((double)i)==(int)sqrt((double)i))
			re--;
	printf("%d\n",re);
}