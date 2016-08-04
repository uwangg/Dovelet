main()
{
	double a,b,c,d,r[4],max = -1;
	int i,max_i;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	r[0] = a/c + b/d;
	r[1] = c/d + a/b;
	r[2] = d/b + c/a;
	r[3] = b/a + d/c;
	for(i=0 ; i<4 ; i++)
	{
		if(max < r[i])
		{
			max = r[i];
			max_i = i;
		}
	}
	printf("%d\n",max_i);
}