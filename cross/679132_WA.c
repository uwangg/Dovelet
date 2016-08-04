main()
{
	int a[4];
	int i,tmp;
	for(i=0 ; i< 4 ; i++)
		scanf("%d",&a[i]);
	if(a[0]>a[1])
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
	if(a[2]>a[3])
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
	if((a[2]-a[0])*(a[3]-a[1])<0)
		printf("not cross\n");
	else
		printf("cross\n");
}