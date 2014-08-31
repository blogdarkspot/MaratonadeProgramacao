//https://www.urionlinejudge.com.br/judge/pt/problems/view/1548

#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main ()
{
	int n,m,q, total;
	vector<int> notas, notas2;

	cin>>n;
	while(n--)
	{
		total=0;
		notas.clear();
		notas2.clear();
		cin>>m;
		for(int i=0; i<m; i++)
		{
			cin>>q;
			notas.push_back(q);
			notas2.push_back(q);
		}
		sort(notas2.rbegin(),notas2.rend());
		for(int i=0; i<m; i++)
			if(notas[i]==notas2[i])
				total++;
		cout<<total<<endl;
	}

	return 0;
}
