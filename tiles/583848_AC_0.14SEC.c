int main()
{
	int a,b,who,par;
	scanf("%d%d",&a,&b);
	who=(a/8)*(b/8);
	if(a%8==0&&b%8!=0)
		par=a/8;
	else if(a%8!=0&&b%8==0)
		par=b/8;
	else if(a%8!=0&&b%8!=0)
		par=a/8+b/8+1;
	else
		par=0;
	printf("The number of whole tiles is %d part tiles is %d",who,par);
	return 0;
}