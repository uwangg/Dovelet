main()
{
	char n1[5],n2[5];
	int i,j,A=0,B=0;
	scanf("%s%s",n1,n2);
	for(i=0 ; i<4 ; i++)
	{
		if(n1[i] == n2[i])
			A++;
		for(j=0 ; j<4 ; j++)
			if(n1[i] == n2[j])
				B++;
	}
	printf("%dA%dB\n",A,B-A);
}