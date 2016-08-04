main()
{
	int r,e,c;
	scanf("%d%d%d",&r,&e,&c);
	if(r == e-c)
		printf("does not matter\n");
	else if(r < e-c)
		printf("advertise\n");
	else
		printf("do not advertise\n");
}