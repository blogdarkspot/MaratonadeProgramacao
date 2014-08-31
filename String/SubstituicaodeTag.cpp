//https://www.urionlinejudge.com.br/judge/pt/problems/view/1254
#include<string>
#include<iostream>
#include<cstdio>
#include <sstream>

using namespace std;

int main (){
	string tag, texto, valor;
	int aux1=0,tamanho, b,numero;
	while(cin>>tag)	{
		scanf("%d ", &numero);
		ostringstream ss;
		ss<<numero;
		valor = ss.str();
		getline(cin, texto);

		for(int o=0; o<tag.size(); o++)
			tag[o]=tolower(tag[o]);

		for (int a=0; a<texto.size(); a++){
			if(texto[a]=='<'){
				a++;
				while(texto[a]!='>') {
					b=a;
					while(tolower(texto[b])==tag[aux1]) {
						aux1++;
						b++;
					}
					if (aux1 == tag.size())	{
						texto.erase(a,aux1);
						texto.insert(a,valor);
					}
					aux1=0;
					a++;
				}
			}
		}
		cout<<texto<<endl;

	}

	return 0;
}
