struct fraction{
	int son;	//����
	int mom;	//�и�
};
int gcd(int a,int b);
int lcm(int a,int b);
main()
{
	struct fraction list[3];
	int i,d=0;
	list[2].son = 0;
	for(i=0 ; i<2 ; i++)
		scanf("%d%d",&list[i].son,&list[i].mom);
	list[2].mom = lcm(list[0].mom,list[1].mom);	//�и� ���
	for(i=0 ; i<2 ; i++)
		list[2].son += list[2].mom/list[i].mom * list[i].son;	//���� ������
	list[2].son = list[2].mom - list[2].son;	//1���� ���ڰ� ����
	if(gcd(list[2].son,list[2].mom)!=1)	//���м� ������ֱ�
	{
		d=gcd(list[2].son,list[2].mom);
		list[2].son=list[2].son/d;
		list[2].mom=list[2].mom/d;
		if(list[2].son == 0)
			printf("0\n");
		else
			printf("%d/%d\n",list[2].son,list[2].mom);
	}
	else
		printf("%d/%d\n",list[2].son,list[2].mom);
}
int gcd(int a,int b)
{
	int r,q;
	while(1)
	{
		q=a/b;	// q�� ��
		r=a%b;	// r�� ������
		if(r == 0)
			break;
		a=b;
		b=r;
	}
	return b;
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}