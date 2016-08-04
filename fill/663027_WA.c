typedef struct pos{
	double s;
	int w;
	int f;
	char po[20];
}POS;
main()
{
	POS p[4]={{4.5,150,200,"Wide Receiver "},{6.0,300,500,"Lineman "},{5.0,200,300,"Quarterback "},{0,}};
	int i;
	scanf("%lf%d%d",&p[3].s,&p[3].w,&p[3].f);
	for(i=0 ; i<4 ; i++)
		if(p[i].s>=p[3].s && p[i].w<=p[3].w && p[i].f<=p[3].f)
			printf("%s",p[i].po);
	if(p[3].s>6.0 || p[3].w<150 || p[3].f <200)
		printf("No positions");
}