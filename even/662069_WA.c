main()
{
	int a,b,re=0;
	int i;
	scanf("%d%d",&a,&b);
	re = b-a+1;
	re-=(int)sqrt((double)b)-(int)sqrt((double)a);
	printf("%d\n",re);
}