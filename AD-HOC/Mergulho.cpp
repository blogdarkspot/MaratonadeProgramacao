//https://www.urionlinejudge.com.br/judge/pt/problems/view/1471
#include <iostream>
#include <cstring>

using namespace std;

int main () {
	int a, b , c , aux;

	while (cin>>a>>b) {
		aux = 0;
		int vetor[a];
		for (int j=0; j<a ;j++)
			vetor[j] =0;
		for (int j=0; j<b;j++){
			cin>>c;
			vetor[c-1]=c;
		}
		if (a == b)
			cout<<"*"<<endl;
		else {
			c = a-b;
			while (c) {
				if (vetor[aux] == 0){
					cout<< aux+1<<" ";
					c--;
				}
				aux++;
			}
			cout<<endl;
		}
	}
	return 0;
}
