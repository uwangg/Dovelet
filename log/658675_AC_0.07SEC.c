int sum(int n);
main()
{
	int n,cnt=0;
	scanf("%d",&n);
	while(n > sum(cnt))
		cnt++;
	printf("%d ",cnt);
	while(n>cnt)
	{
		n-=cnt;
		cnt--;
	}
	printf("%d\n",n);
}
int sum(int n)
{
	return n*(n+1)/2;
}