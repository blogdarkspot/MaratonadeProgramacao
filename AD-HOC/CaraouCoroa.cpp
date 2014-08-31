//https://www.urionlinejudge.com.br/judge/pt/problems/view/1329

#include<cstdio>
int main()
{
	int n;
	int mary = 0, john = 0;
	int r;

	while(scanf("%d",&n) && n != 0)
	{
		for (int i = 0; i < n;i++)
		{
			scanf("%d",&r);
			if (r == 0)
				mary++;
			else
				john++;
		}
		printf("Mary won %d times and John won %d times\n",mary,john);
		mary = john = 0;
	}

	return 0;
}
