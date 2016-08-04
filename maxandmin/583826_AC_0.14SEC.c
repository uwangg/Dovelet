int max(int a,int b)
{
	if(a>b)
		return a;
	else if(a<=b)
		return b;
}
int min(int a,int b)
{
	if(a>b)
		return b;
	else if(a<=b)
		return a;
}
int main()
{
	int x,y;

	scanf("%d %d",&x,&y);
	printf("%d",max(min(x,y),x));

	return 0;
}