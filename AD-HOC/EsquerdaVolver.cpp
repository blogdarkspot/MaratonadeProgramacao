//https://www.urionlinejudge.com.br/judge/pt/problems/view/1437

#include<cstdio>
#include<cmath>
#include<string>
#include<iostream>

using namespace std;

int main ()
{
	int a, d = 0, e = 0;
	string b;
	while (scanf("%d", &a) && a!=0 ){
		cin>>b;
		for (int c = 0; c<a ; c++) {
			if (b[c] == 'E')
				e++;
			else
				d++;
		}
		a = abs(d-e);
		a = a%4;
		if ( d>e) {
			switch (a) {
			case 0: printf("N\n");break;
			case 1: printf("L\n");break;
			case 2: printf("S\n");break;
			case 3: printf("O\n");break;
			}
		}
		else {
			switch (a){
			case 0: printf("N\n");break;
			case 1: printf("O\n");break;
			case 2: printf("S\n");break;
			case 3: printf("L\n");break;
			}
		}
		e = d = 0;
	}
	return 0;
}
