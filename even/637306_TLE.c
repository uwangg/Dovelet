main()
{
	int a,b,i,j,s,n=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		s=0;
		for(j=1;j<=i;j++)
			if(i%j==0)
				s++;
		if(s%2==0)
			n++;}

	printf("%d",n);
}