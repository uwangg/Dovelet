main()
{
	int n[3][4];
	int i,j,r[3]={0,};
	char a[] = {'D','C','B','A','E'};
	for(i=0 ; i<3 ; i++)
		for(j=0 ; j<4 ; j++)
			scanf("%d",&n[i][j]);
	for(i=0 ; i<3 ; i++)
		for(j=0 ; j<4 ; j++)
			if(n[i][j] == 1)
				r[i]++;

	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			if(r[i] == j)
			{
				printf("%c\n",a[j]);
				break;
			}
		}
	}
}