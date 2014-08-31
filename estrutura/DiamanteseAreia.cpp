//https://www.urionlinejudge.com.br/judge/pt/problems/view/1069
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string diamantes;
	int testes, aux, total;
	cin>>testes;
	for (int a=0; a<testes; a++)
	{
		aux = total = 0;
		cin>>diamantes;
		for (int b=0; b<diamantes.size(); b++)
		{
			if(diamantes[b]=='<')
				aux++;
			if(diamantes[b]=='>')
				if(aux>0)
				{
					total++;
					aux--;
				}

		}
		cout<<total<<endl;
	}

	return 0;
}
