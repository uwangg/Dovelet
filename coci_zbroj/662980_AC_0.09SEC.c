int max(int n1,int n2);	//�ִ밪�� ���
int main()
{
	int dec[10][10]={0,};	//10���� ���̺��� ���� �迭
	int i,j,k;
	int a,b,result=0,result2=0;
	int coefa[30]={0,},coefb[30]={0,},sum[30]={0,};
	int coefa2[30]={0,},coefb2[30]={0,},sum2[30]={0,};

	for(i=0 ; i<10 ; i++)	//10���� ���̺��� �������
		for(j=0 ; j<10 ; j++)
			dec[i][j]=i+j;

	scanf("%d%d",&a,&b);

	i=0,j=0;
	while(1)	//a�� 9���� Ŭ��� ����� �и�
	{ 
		coefa[i] = a%10;
		coefa2[i] = coefa[i];
		if(coefa[i] == 6)
			coefa[i] = 5;
		if(coefa2[i] == 5)
			coefa2[i] = 6;
		if(a<10)
			break;
		a = a/10;
		i++;
	}
	while(1)	//b�� 9���� Ŭ��� ����� �и�
	{
		coefb[j] = b%10;
		coefb2[j] = coefb[j];
		if(coefb[j] == 6)
			coefb[j] = 5;
		if(coefb2[j] == 5)
			coefb2[j] = 6;
		if(b<10)
			break;
		b = b/10;
		j++;
	}
	for(k=0 ; k<=max(i,j) ; k++)	//�� ����� ����ǥ���� ã�Ƽ� ������
		sum[k] = dec[coefa[k]][coefb[k]];
	for(k=0 ; k<=max(i,j) ; k++)	//�� ����� �������� �����ش��� �� ������
		result+= (int)pow(10,(double)k)*sum[k];

	for(k=0 ; k<=max(i,j) ; k++)	//�� ����� ����ǥ���� ã�Ƽ� ������
		sum2[k] = dec[coefa2[k]][coefb2[k]];

	for(k=0 ; k<=max(i,j) ; k++)	//�� ����� �������� �����ش��� �� ������
		result2+= (int)pow(10,(double)k)*sum2[k];

	printf("%d %d\n",result,result2);
	return 0;
}
int max(int n1,int n2)
{
	if(n1>n2)
		return n1;
	return n2;
}