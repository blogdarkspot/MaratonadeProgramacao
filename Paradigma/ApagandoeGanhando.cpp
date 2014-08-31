//https://www.urionlinejudge.com.br/judge/pt/problems/view/1084

#include <iostream>
#include <vector>
using namespace std;

int main (){
	vector <char> resultado;
	string valor;
	int n, m;

	while (cin>>n>>m && n!=0 && m!=0){
		resultado.clear();
		cin>>valor;
		for (int a=0; a<n; a++){
			while (!resultado.empty()&& m>0&&resultado.back()<valor[a]){
				resultado.pop_back();
				m--;
			}
			resultado.push_back(valor[a]);
		}
		while (m--)
			resultado.pop_back();
		for (int a=0; a<resultado.size(); a++)
			cout<<resultado[a];
		cout<<endl;
	}
	return 0;
}
