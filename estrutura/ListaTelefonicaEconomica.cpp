//https://www.urionlinejudge.com.br/judge/pt/problems/view/1211

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
	string a, b;
	vector<string> casosteste;
	int casos, resultados, tamanho;
	while (cin>>casos)
	{
		casosteste.clear();
		resultados = 0;
		for (int j =0; j<casos; j++){
			cin>>a;
			casosteste.push_back(a);
		}
		sort(casosteste.begin(), casosteste.end());

		a = casosteste[0];
		tamanho = a.size();
		for (int j=1; j<casos; j++)
		{
			b = casosteste[j];
			for(int k=0; k<tamanho; k++)
			{
				if (a[k]==b[k])
					resultados++;
				else
					break;
			}

			a=b;
		}
		cout<<resultados<<endl;
	}
	return 0;
}
