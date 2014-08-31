//https://www.urionlinejudge.com.br/judge/pt/problems/view/1310

#include <iostream>

using namespace std;

int main () {
	int N, custoPorDia, receita;
	while (cin>>N){
		int aux = 0;
		int maximo = 0;
		cin>>custoPorDia;
		for (int a=0; a<N; a++){
			cin>>receita;
			aux+=(receita-custoPorDia);
			if (aux >=0){
				if(aux>maximo)
					maximo = aux;
			}
			else
				aux = 0;
		}
		cout<<maximo<<endl;
	}
	return 0;
}
