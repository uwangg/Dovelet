#include <stdlib.h>
struct car{
	int s;
	int h;
};
main()
{
	struct car*p = NULL;
	int n,i,mile=0;
	scanf("%d",&n);
	p=(struct car*)malloc(n*sizeof(struct car));
	for(i=0 ; i<n ; i++)
		scanf("%d%d",&(p+i)->s,&(p+i)->h);
	mile += p->s*p->h;
	for(i=1 ; i<n ; i++)
		mile += (p+i)->s*((p+i)->h-(p+i-1)->h);
	printf("%d miles\n",mile);
}