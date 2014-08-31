//https://www.urionlinejudge.com.br/judge/pt/problems/view/1424
#include<map>
#include<vector>
#include<iostream>

using namespace std;

int main ()
{
	map< int, vector<int> > valores;
	int n, m, k, v, a=1;
	while(cin>>n>>m)
	{
		valores.clear();
		a=1;
		while(n--)
		{
			cin>>k;
			valores[k].push_back(a++);
		}
		while(m--)
		{
			cin>>k>>v;
			if(valores[v].size()>0 && valores[v].size()>=k)
				cout<<valores[v][k-1]<<endl;
			else
				cout<<0<<endl;
		}
	}
	return 0;
}
