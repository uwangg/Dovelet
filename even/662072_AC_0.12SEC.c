main()
{
	int a,b,re=0;
	int i;
	scanf("%d%d",&a,&b);
	re = b-a+1;
	re-=floor(sqrt((double)b))-floor(sqrt((double)a-1));
	printf("%d\n",re);
}