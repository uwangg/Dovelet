int prime(int n)
{
	int i,k=0;
	if(n<3)
		return 0;
	for(i=2; i<n ; i++)
		if(n%i==0)
			k++;
	return k;
}
main()
{
	int n[6][2]={0,};
	int i;
	for(i=0 ; i<6 ; i++)
		scanf("%d",&n[i][0]);
	for(i=0 ; i<6 ; i++)
	{
		n[i][1] = n[i][0];
		if(prime(n[i][0])==0)
			printf("0\n");
		else{
			while(prime(n[i][1])!=0)
				n[i][1]++;
			while(prime(n[i][0])!=0)
				n[i][0]--;
			printf("%d\n",n[i][1]-n[i][0]);
		}
	}
}