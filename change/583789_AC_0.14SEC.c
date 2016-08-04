#include <stdio.h>

int main()
{
	int price;

	scanf("%d",&price);

	price=1000-price;
	printf("%d %d %d",price/100,(price%100)/50,((price%100)%50)/10);

	return 0;
}