void bubble_sort(int a[],int n)
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
main()
{
	int a[3],i,re;
	for(i=0 ; i<3 ; i++)
		scanf("%d",&a[i]);
	bubble_sort(a,3);
	if(a[1]-a[0] == a[2]-a[1])
	{
		if(2*a[2]-a[1]>100)
			printf("%d",2*a[0]-a[1]);
		else
			printf("%d",2*a[2]-a[1]);
	}
	else if(a[1]-a[0] > a[2]-a[1])
		printf("%d",a[0]+a[2]-a[1]);
	else
		printf("%d",a[1]+a[1]-a[0]);
}