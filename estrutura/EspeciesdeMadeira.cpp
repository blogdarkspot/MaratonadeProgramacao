//https://www.urionlinejudge.com.br/judge/pt/problems/view/1260

#include <iostream>
#include <stdio.h>
#include <map>
#include <iomanip>

using namespace std;

int main ()
{
	int n, i = 1;
	map <string, double> lista;
	map <string, double>::iterator it;

	scanf(" %d", &n);
	getchar();
	string arvore;
	getline(cin, arvore);

	while (n--)
	{
		lista.clear();
		int total = 0;
		double p = 0;
		arvore = "";

		while (getline(cin, arvore) && !arvore.empty())
		{
			lista[arvore]+=1;
			total++;
		}

		if (arvore.empty() && i > 1)
		{
			cout << endl;
		}
		i++;

		for (it = lista.begin(); it != lista.end(); it++)
		{
			cout << it->first << " " << fixed << setprecision(4) <<it->second / total * 100 << endl;
		}

	}
	return 0;
}
