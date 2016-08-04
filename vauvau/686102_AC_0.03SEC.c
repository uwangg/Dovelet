main()
{
	int n[9],i,re1,re2;
	for(i=0 ; i<7 ; i++)
		scanf("%d",&n[i]);
	n[7] = n[0]+n[1];
	n[8] = n[2]+n[3];
	for(i=4 ; i<7 ; i++)
	{
		re1 = n[i]%n[7];
		re2 = n[i]%n[8];
		if(re1 == 0)
			re1+=n[7];
		if(re2 == 0)
			re2+=n[8];
		if(re1>0 && re1<=n[0] && re2>0 && re2<=n[2])
			printf("both\n");
		else if(re1>n[0] && re1<=n[7] && re2>n[2] && re2<=n[8])
			printf("none\n");
		else
			printf("one\n");
	}
}