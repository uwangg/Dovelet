main()
{
	int re[4]={0,},n[4][2];
	int i,j,tmp;

	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<2 ; j++)
			scanf("%d",&n[i][j]);
	re[0] = n[0][1]-n[0][0];
	for(i=1 ; i<4 ; i++)
		re[i] = re[i-1]+n[i][1]-n[i][0];
	for(i=0 ; i<3 ; i++)
		if(re[i]>re[i+1])
		{
			tmp=re[i+1];
			re[i+1]=re[i];
			re[i]=tmp;
		}
		printf("%d\n",re[3]);
}