//https://www.urionlinejudge.com.br/judge/pt/problems/view/1091

#include<cstdio>

int main () {
	int teste, x,y, p1, p2;

	while (scanf("%d", &teste) && teste!=0)	{
		scanf("%d %d", &p1, &p2);
		for(int a=0; a<teste; a++) {
			scanf("%d %d", &x, &y);
			if ((x-p1)==0 || (y-p2)==0)
				printf("divisa\n");
			else {
				if ((x-p1)>0) {
					if((y-p2)>0)
						printf("NE\n");
					else
						printf("SE\n");
				}
				else {
					if((y-p2)>0)
						printf("NO\n");
					else
						printf("SO\n");
				}
			}
		}
	}
	return 0;
}
