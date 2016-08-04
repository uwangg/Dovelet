main()
{
	double n=0;
	while(1)
	{
		scanf("%lf",&n);
		if(n==-1.0)
			break;
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n",n,n*0.167);
	}
}