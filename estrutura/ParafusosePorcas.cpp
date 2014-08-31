//https://www.urionlinejudge.com.br/judge/pt/problems/view/1520

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	vector <int> resultados;
	int valor, j, k;
	pair<vector<int>::iterator, vector<int>::iterator> range;
	while(cin>>valor)
	{
		resultados.clear();
		for(int a=0; a<valor; a++)
		{
			cin>>j>>k;
			for(int c=j; c<=k; c++)
				resultados.push_back(c);
		}
		sort(resultados.begin(), resultados.end());
		cin>>k;
		if (binary_search(resultados.begin(), resultados.end(), k))
		{
			range = equal_range(resultados.begin(), resultados.end(), k);
			cout<<k<<" found from "<<(range.first - resultados.begin())<<" to "<<(range.second - resultados.begin())-1<<endl;
		}
		else
			cout<<k<<" not found"<<endl;
	}
	return 0;
}
