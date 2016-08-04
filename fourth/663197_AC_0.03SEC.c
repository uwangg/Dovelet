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
	int a[3],b[3],i,j;
	for(i=0;i<3;i++)
			scanf("%d %d",&a[i],&b[i]);
	bubble_sort(a,3);
	bubble_sort(b,3);
	if(a[0]==a[1])
		printf("%d ",a[2]);
	else if(a[1]==a[2])
		printf("%d ",a[0]);
	if(b[0]==b[1])
		printf("%d",b[2]);
	else if(b[1]==b[2])
		printf("%d",b[0]);
}