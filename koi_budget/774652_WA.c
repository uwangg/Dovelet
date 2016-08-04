main()
{
	int N,i,bud_s;
	int b[10000],total=0,lar_to=0,max=0;
	int lar_to_n=0;
	scanf("%d",&N);
	for(i=0 ; i<N ; i++)
	{
		scanf("%d",&b[i]);
		total += b[i];
		if(max < b[i])
			max = b[i];
	}
	scanf("%d",&bud_s);
	if(bud_s < total)
	{
		for(i=0 ; i<N ; i++)
		{
			if((total/N)<b[i])
			{
				lar_to += b[i];
				lar_to_n ++;
			}
		}
		printf("%d\n",(lar_to-(total-bud_s))/lar_to_n);
	}
	else
		printf("%d\n",max);
}