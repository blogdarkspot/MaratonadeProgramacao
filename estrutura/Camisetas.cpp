//https://www.urionlinejudge.com.br/judge/pt/problems/view/1258

#include<string>
#include<iostream>
#include<algorithm>
#include<limits>

using namespace std;
int m,n=0;
struct person{
	string nome;
	char tamanho;
	string cor;
}a[61];

bool operator< (person x, person y)
{
	if (x.cor<y.cor) return true;
	if (x.cor==y.cor)
	{
		if (x.tamanho>y.tamanho) return true;
		if (x.tamanho==y.tamanho && x.nome < y.nome) return true;
	}
	return false;
}

int main ()
{
	while (cin>>m)
	{
		if(m==0)
			break;
		if(n++)
			cout<<endl;
		for (int i=0; i<m ; i++)
		{
			cin.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' );
			getline (cin, a[i].nome);
			cin>>a[i].cor>>a[i].tamanho;
		}

		sort (a, a+m);

		for (int i=0; i<m;i++)
			cout<<a[i].cor<<" "<<a[i].tamanho<<" "<<a[i].nome<<endl;
	}

	return 0;
}
