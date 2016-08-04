main()
{
	int a[10],b[10],a_s=0,b_s=0;
	int i;
	for(i=0 ; i<10 ; i++)
		scanf("%d",&a[i]);
	for(i=0 ; i<10 ; i++)
	{
		scanf("%d",&b[i]);
		if(a[i] == b[i])
		{
			a_s++;b_s++;
		}
		else if(a[i] > b[i])
			a_s += 3;
		else
			b_s += 3;
	}
	printf("%d %d\n",a_s,b_s);
	if(a_s == b_s)
	{
		for(i=9 ; i>=0 ; i--)
		{
			if(a[i] > b[i])
			{
				printf("A\n");
				break;
			}else if(a[i] < b[i]){
				printf("B\n");
				break;
			}else
				continue;
		}
		if(i == -1)
			printf("D\n");
	}
	else if(a_s > b_s)
		printf("A\n");
	else
		printf("B\n");
}