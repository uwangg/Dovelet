main()
{
	int n[7],i,max=0,j;
	for(i=0;i<7;i++)
	{
		scanf("%d",&n[i]);
		if(max<n[i])
		{
			max = n[i];
			j = i;
		}
	}
	printf("%d\n",j+1);
}