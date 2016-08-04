int combination(int n,int k)
{
	if(k==0 || n==k)
		return 1;
	else
		return combination(n-1,k-1)+combination(n-1,k);
}
main()
{
	int num;
	scanf("%d",&num);
	if(num<4)
		printf("0\n");
	else
		printf("%d\n",combination(num,4));
}