//https://www.urionlinejudge.com.br/judge/pt/problems/view/1383

#include <cstdio>

int main (){
	int a, soma, erro = 0, a1,a2,a3,a4,a5,a6,a7,a8,a9, matriz[9][9];
	scanf("%d ", &a);
	for(int j= 1; j<=a; j++){

		for (int b=0; b<9 ; b++)
		{
			scanf("%d %d %d %d %d %d %d %d %d ", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9);
			matriz[b][0] = a1;
			matriz[b][1] = a2;
			matriz[b][2] = a3;
			matriz[b][3] = a4;
			matriz[b][4] = a5;
			matriz[b][5] = a6;
			matriz[b][6] = a7;
			matriz[b][7] = a8;
			matriz[b][8] = a9;
			if(a1+a2+a3+a4+a5+a6+a7+a8+a9 != 45)
				erro = 1;
		}

		if( erro == 0){
			for (int b=0; b<9 ; b++){
				a9 = matriz[8][b];
				a8 = matriz[7][b];
				a7 = matriz[6][b];
				a6 = matriz[5][b];
				a5 = matriz[4][b];
				a4 = matriz[3][b];
				a3 = matriz[2][b];
				a2 = matriz[1][b];
				a1 = matriz[0][b];
				if(a1+a2+a3+a4+a5+a6+a7+a8+a9 != 45){
					erro = 1;
					b = 9;
				}
			}

			if(erro == 0){
				a3 = a2 =a1 =0;
				for (int b= 0; b<=6 ; b++){
					for (int c= 0; c<3 ;c++){
						a1=a1+matriz[b][c]+matriz[b+1][c]+matriz[b+2][c];
						a2=a2+matriz[b][c+3]+matriz[b+1][c+3]+matriz[b+2][c+3];
						a3=a3+matriz[b][c+6]+matriz[b+1][c+6]+matriz[b+2][c+6];
					}
					if(a1!=45||a2!=45||a3!=45){
						erro = 1;
						b+=7;
					}
					b+=2;
					a3 = a2 =a1 =0;
				}
			}
		}
		if (erro ==1)
			printf("Instancia %d\nNAO\n\n", j);
		else
			printf("Instancia %d\nSIM\n\n", j);
		erro = 0;
	}

	return 0;
}
