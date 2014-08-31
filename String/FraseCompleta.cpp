//https://www.urionlinejudge.com.br/judge/pt/problems/view/1551

#include <iostream>
#include <string>
#include <map>
#include<cstdio>

using namespace std;

int main ()
{

	map<char, int> caracteres;
	string texto;
	int j;
	scanf ("%d ", &j);
	while (j--)
	{
		caracteres.clear();
		getline(cin, texto);

		for (int a=0; a<texto.size(); a++)
		{
			texto[a] = tolower(texto[a]);
		}

		for (int a=0; a<texto.size(); a++)
		{
			if (texto[a]>=97 && texto[a]<=122)
				caracteres[texto[a]]+=1;
		}
		if(caracteres.size()==26)
			cout<<"frase completa"<<endl;
		else
		{
			if(caracteres.size()>=13)
				cout<<"frase quase completa"<<endl;
			else
				cout<<"frase mal elaborada"<<endl;
		}



	}
	return 0;
}
