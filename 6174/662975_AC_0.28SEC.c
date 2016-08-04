void max_bubble_sort(int a[],int n);
void contrary(int a[],int n);
int num(int a[],int n);
main()
{
	int n,a[4]={0,},cnt,i;
	int min,max,j=0;	//적은거,큰거
	scanf("%d",&n);
	while(n != 6174)
	{
		a[0] = n%10;
		cnt = 1;
		while(n/10 >0)
		{
			n = n/10;
			a[cnt] = n%10;
			cnt++;
		}
		max_bubble_sort(a,4);
		min = num(a,4);
		contrary(a,4);
		max = num(a,4);
		n = min - max;
		j++;
	}
	printf("%d\n",j);
}
void max_bubble_sort(int a[],int n)
{
	int i,j,k,tmp;
	for(j=n-1 ; j>0 ; j--){
		for(k=0 ; k<j ; k++){
			if(a[k]>a[k+1]){
				tmp = a[k];
				a[k] = a[k+1];
				a[k+1] = tmp;
			}
		}
	}
}
void contrary(int a[],int n)
{
	int i,tmp,k;
	k=n-1;
	for(i=0 ; i<n/2 ; i++)
	{
		tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;
		k--;
	}
}
int num(int a[],int n)
{
	int i,r=0;
	for(i=0 ; i<n ; i++)
		r += pow(10,(double)i)*a[i];
	return r;
}