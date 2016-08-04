main()
{
	int a,i,n,k=0;
	scanf("%d",&a);
	n = sqrt((double)a);
	for(i=2 ; i<=n ; i++)
		if(a%i == 0)
			k++;
	if(k == 0)
		printf("prime");
	else
		printf("not prime");
}