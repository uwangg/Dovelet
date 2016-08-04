#include <stdlib.h>
void bubble_sort(int a[],int n)
{
	int i,j,k,tmp;
	for(j=n-1 ; j>0 ; j--){
		for(k=0 ; k<j ; k++){
			if(a[k]<a[k+1]){
				tmp = a[k];
				a[k] = a[k+1];
				a[k+1] = tmp;
			}
		}
	}
}
main()
{
	int * p = NULL;
	int n,i;
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	for(i=0 ; i<n ; i++)
		scanf("%d",p+i);
	bubble_sort(p,n);
	printf("%d %d",*(p),*(p+n-1));
}