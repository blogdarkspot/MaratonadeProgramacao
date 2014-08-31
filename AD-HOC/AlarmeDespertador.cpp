//https://www.urionlinejudge.com.br/judge/pt/problems/view/1103

#include<cstdio>
#define dia 1440
using namespace std;

int main ()
{
	int h1, h2, m1, m2;
	while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && (h1!=0 || h2!=0 || m1 != 0 || m2!= 0))
	{
		if((h1*60 + m1)>(h2*60+m2)){
			h1 = (dia -(h1*60 + m1)+(h2*60)+m2);
			printf("%d\n", h1 );
		}
		else{
			h1 = (h2*60+m2)-(h1*60+m1);
			printf("%d\n", h1 );
		}
	}


	return 0;
}
