//https://www.urionlinejudge.com.br/judge/pt/problems/view/1087

#include <cstdio>
#include <cmath>

using namespace std;

int main ()
{
	int x1,x2, y1, y2;
	while (scanf("%d %d %d %d", &x1, &x2, &y1, &y2) && (x1!=0 || x2 !=0 || y1!=0 || y2 !=0))
	{
		if ((x1 == y1) || (x2 == y2) || (x1+x2)==(y1+y2)||
				(abs(x1-y1)==abs(x2-y2)))
		{
			if ((x1==y1)&&(x2==y2))
				printf("0\n");
			else
				printf("1\n");
		}
		else
			printf("2\n");
	}
	return 0;
}
