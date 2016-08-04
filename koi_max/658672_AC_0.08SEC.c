int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	int n[10][10]={0,};
	int i,j,result=0;
	int row,line;

	for(i=1; i<10 ; i++)
		for(j=1; j<10 ; j++)
			scanf("%d",&n[i][j]);
	for(i=1 ; i<10 ; i++)
	{
		for(j=1 ; j<10 ; j++)
		{
			result = max(result,n[i][j]);
		}
	}
	for(i=1 ; i<10 ; i++)
	{
		for(j=1 ; j<10 ; j++)
		{
			if(result == n[i][j])
			{
				line = i;
				row = j;
				break;
			}
		}
	}
	printf("%d\n",result);
	printf("%d %d\n",line,row);
}