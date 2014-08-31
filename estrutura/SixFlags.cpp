//https://www.urionlinejudge.com.br/judge/pt/problems/view/1487
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int,int>ii;
bool cmp (ii a, ii b)
{
	float j, k;
	j = (float)a.second / a.first;
	k = (float)b.second / b.first;
	return (j>k);
}
int main ()
{
	vector<ii> brinquedos;
	int a, b, vezes, tempo, total, contador=0;
	ii j;

	while (cin>>vezes>>tempo)
	{
		if(vezes==0 &&tempo ==0)
			break;
		contador++;
		total =0;
		brinquedos.clear();
		for (int i=0; i<vezes;i++)
		{
			cin>>a>>b;
			j.first = a;
			j.second = b;
			brinquedos.push_back(j);
		}
		sort(brinquedos.begin(), brinquedos.end(), cmp);

		for(int i=0; i< brinquedos.size(); i++)
		{
			if(tempo>=brinquedos[i].first)
			{
				total+= (brinquedos[i].second*(tempo/brinquedos[i].first));
				tempo = tempo%brinquedos[i].first;
			}
		}
		cout<<"Instancia "<<contador<<endl<<total<<"\n\n";
	}
	return 0;
}
