main()
{
	int cnt,a[5],re[5],k,j;
	long long int n,i;
	for(i=1 ; i<=10000 ; i++){
		n=i;
		a[0] = n%10;
		cnt = 1;
		while(n/10 >0)
		{
			n = n/10;
			a[cnt] = n%10;
			cnt++;
		}
		n=i*i;
		k=0;
		for(j=0 ;j<cnt ; j++)
		{
			re[j] = n%10;
			if(a[j] == re[j])
				k++;
			n = n/10;
		}
		if(k == cnt)
			printf("%d\n",i);
	}
}