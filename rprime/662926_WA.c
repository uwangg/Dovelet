int main()
{
	int a,b,r,q;
	printf("a�� b �Է� : ");
	scanf("%d %d",&a,&b);
	while(1)
	{
		q=a/b;
		r=a%b;
		if(r == 0)
			break;
		a=b;
		b=r;
	}
	if(b == 1)
		printf("yes");
	else
		printf("no");
}