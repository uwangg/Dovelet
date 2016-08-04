main()
{
	int n;
	scanf("%d",&n);
	if(n%2 == 1)
		printf("%d ",n/2+1);
	else
		printf("%d ",n/2);
	if(n%3 == 2)
		printf("%d\n",n/3+1);
	else
		printf("%d\n",n/3);
}