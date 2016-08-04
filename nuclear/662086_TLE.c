main()
{
	int k,n;
	int i=1,j,re=0;
	scanf("%d%d",&k,&n);
	while(1)
	{
		if(n==(int)pow(k,i))
			break;
		i++;
	}
	for(j=0 ; j<i ; j++)
		re+=(int)pow(k,j);
	printf("%d\n",re*100);
	return 0;
}