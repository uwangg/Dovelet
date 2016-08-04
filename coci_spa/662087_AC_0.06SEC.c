main()
{
	int h,m;
	scanf("%d%d",&h,&m);
	if(m-45 < 0)
	{
		h--;
		m=m+15;
	}
	else
		m=m-45;
	if(h < 0)
		h=h+24;
	printf("%d %d\n",h,m);
}