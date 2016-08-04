void swap(int* a,int* b)
{
	int tmp;
	if(a>b){
		tmp=*a;
		*a=*b;
		*b=tmp;
	}	
}
int main()
{
	int a[7],i;
	for(i=0 ; i<7 ; i++)
		scanf("%d",&a[i]);
	for(i=1 ; i<7 ; i++)
		swap(&a[i-1],&a[i]);
	printf("%d",a[6]);
	return 0;
}