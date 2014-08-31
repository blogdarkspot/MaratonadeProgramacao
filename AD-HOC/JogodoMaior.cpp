//https://www.urionlinejudge.com.br/judge/pt/problems/view/1397

#include <cstdio>
using namespace std;

int main (){
	int a = 0 , b = 0, partidas, pontosA = 0, pontosB = 0;
	while (scanf("%d", &partidas) && partidas != 0){
		for (int c =0; c<partidas ;c++){
			scanf("%d %d", &a, &b);
			if (a>b)
				pontosA++;
			if (b>a)
				pontosB++;

		}
		printf("%d %d\n", pontosA, pontosB);
		pontosA = pontosB = 0;
	}
	return 0;
}
