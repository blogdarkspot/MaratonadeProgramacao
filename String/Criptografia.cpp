//https://www.urionlinejudge.com.br/judge/pt/problems/view/1024
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;
int main ()
{
	int vezes;
	string codigo;
	char aux;
	scanf ("%d ", &vezes);


	while (vezes)
	{
		getline(cin, codigo);

		for (int b=0; b<codigo.size(); b++)
		{
			if((codigo[b]>=65 && codigo[b]<=90) || (codigo[b]>=97 && codigo[b]<=122))
				codigo[b]+=3;


		}
		for (int b=0; b<codigo.size()/2; b++)
		{
			aux = codigo[codigo.size()-b-1];
			codigo[codigo.size()-b-1] = codigo[b];
			codigo[b]=aux;
		}
		for (int b=codigo.size(); b>=codigo.size()/2;b--)
		{
			codigo[b]-=1;
		}
		cout<<codigo<<endl;
		vezes--;
	}
	return 0;
}
