void main()
{
	double n,k,num;
	int i,result = 0;
	scanf("%lf%lf",&n,&k);
	num = log(k)/log(n);

	for(i=0 ; i<num ; i++)
		result += (100*(int)pow((double)n,i));

	printf("%d\n",result);
}