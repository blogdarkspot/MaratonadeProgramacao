//https://www.urionlinejudge.com.br/judge/pt/problems/view/1441
#include<cstdio>
#include<cmath>
using namespace std;

int main ()
{
	int a, maior = 0;
	while( scanf("%d", &a) && a!=0)
	{
		maior = a;
		while (a!=1)
		{
			if(a%2==1) a = a*3+1;
			else  a = 0.5*a;
			maior = (maior+a+abs(maior-a))/2;
		}
		printf("%d\n", maior);
		maior = 0;
	}

	return 0;
}
