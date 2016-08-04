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
	int a[3],i;
	for(i=0 ; i<3 ; i++)
		scanf("%d",&a[i]);
	for(i=1 ; i<3 ; i++)
		swap(&a[i-1],&a[i]);
	printf("%d",a[2]);
	return 0;
}