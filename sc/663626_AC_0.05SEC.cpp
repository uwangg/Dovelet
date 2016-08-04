#include <iostream>
using namespace std;
int main()
{
	int a,n[6]={0,};
	while(1)
	{
		cin >> a;
		if(a==-1)
			break;
		if(a<101 && a>89)
			n[1]++;
		else if(a<90 && a>79)
			n[2]++;
		else if(a<80 && a>69)
			n[3]++;
		else if(a<70 && a>59)
			n[4]++;
		else
			n[5]++;
		n[0]++;
	}
	for(int i=0 ; i<6 ; i++)
		cout << n[i] << endl;
return 0;
}