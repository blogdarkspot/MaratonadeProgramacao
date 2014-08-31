//https://www.urionlinejudge.com.br/judge/pt/problems/view/1255

#include<map>
#include<string>
#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;

int main (){
	int a;
	string texto;
	map<char, int> valores;
	scanf("%d ", &a);
	while(a--) {
		valores.clear();
		getline(cin, texto);
		for (int c=0; c<texto.size(); c++)
			texto[c] = tolower(texto[c]);
		for (int c=0; c<texto.size(); c++){
			if (texto[c]>=97 && texto[c]<=122)
				valores[texto[c]]+=1;
		}
		int l=0;
		for (int c=97; c<=122; c++){
			if (valores[c]>l)
				l = valores[c];
		}
		char cha;
		for (int c=97; c<=122; c++){
			if (valores[c]==l){
				cha = c;
				cout<<cha;
			}
		}

		cout<<endl;
	}
	return 0;
}
