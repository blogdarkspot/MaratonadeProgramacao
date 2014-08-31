//https://www.urionlinejudge.com.br/judge/pt/problems/view/1256

#include<cstdio>
#include<vector>
#include<iostream>


using namespace std;

int main ()
{
	vector< vector<int> > g;
	int a, b, c,d, aux = 0;
	cin>>a;
	while (a--)
	{
		g.clear();
		cin>>b>>c;
		g.resize(b);
		for (int k=0; k<c; k++)
		{
			cin>>d;
			g[d%b].push_back(d);
		}
		for (int k=0; k<g.size(); k++){
			cout<<k<<" -> ";
			for (int j=0; j<g[k].size(); j++)
			{

				cout<<g[k][j]<<" -> ";
			}
			cout<<"\\"<<endl;

		}
		if (a>=1)
			cout<<endl;
	}
	return 0;
}
