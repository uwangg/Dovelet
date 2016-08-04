main()
{
	int y,z;
	scanf("%d%d",&y,&z);
	if(y == 1)
		printf("%d\n",y*z);
	else{
		printf("%d\n",y*z-(y-1));
	}
}