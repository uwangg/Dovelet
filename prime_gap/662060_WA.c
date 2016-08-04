int prime(int n)
{
	int i,k=0;
	for(i=2; i<(int)sqrt((double)n) ; i++)
		if(n%i==0)
			k++;
	return k;
}
main()
{
	int n[2]={0,};
	while(1){
		scanf("%d",&n[0]);
		if(n[0]==0)
			break;
		n[1] = n[0];
		if(prime(n[0])==0)
			printf("0\n");
		else{
			while(prime(n[1])!=0)
				n[1]++;
			while(prime(n[0])!=0)
				n[0]--;
			printf("%d\n",n[1]-n[0]);
		}
	}
}