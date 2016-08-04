#include<stdlib.h>
main()
{
	int * p = NULL;
	int n,i,min,max;
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	scanf("%d",p);
	min = *p;
	max = *p;
	for(i=1 ; i<n ; i++)
	{
		scanf("%d",p+i);
		if(max < *(p+i))
			max = *(p+i);
		else if(min > *(p+i))
			min = *(p+i);
	}
	printf("%d %d",max,min);
}