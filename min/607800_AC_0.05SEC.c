int com(int a1,int a2)
{
	if(a1>=a2)
		return a2;
	else
		return a1;
}
int main()
{
	int n[8],i;
	for(i=0;i<7;i++)
		scanf("%d",&n[i]);
	for(i=1;i<7;i++)
		n[i]=com(n[i-1],n[i]);
	printf("%d",n[6]);
	return 0;
}