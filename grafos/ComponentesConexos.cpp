//https://www.urionlinejudge.com.br/judge/pt/problems/view/1082
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class mycomparison {
	bool reverse;
public:
	mycomparison(const bool& revparam=false)
{reverse=revparam;}
	bool operator() (const int& lhs, const int&rhs) const  {
		if (reverse) return (lhs<rhs);
		else return (lhs>rhs);
	}
};

void bfs (int**g,int n, int v, bool*marcados) {
	int x;
	queue <int> fileira;
	priority_queue <int , vector<int>, mycomparison > print;
	fileira.push(v);
	marcados[v]=true;
	while(!fileira.empty()){
		x = fileira.front();
		print.push(x);
		for(int a=0; a<n;a++) {
			if(g[x][a] == 1 && !marcados[a]){
				fileira.push(a);
				marcados[a] = true;
			}
		}
		fileira.pop();
	}
	char c;
	while(!print.empty()){
		c = print.top()+'a';
		cout<<c<<",";
		print.pop();
	}
	cout<<endl;
}

int main () {
	int**m ;
	int n, e,v, contadorP=0;
	char a1, a2;
	cin>>n;

	while(n--) {
		contadorP++;
		cin>>v>>e;
		bool*marcados = new bool[v];
		for (int a=0; a<v; a++)
			marcados[a]= false;
		m = new int*[v];
		for (int a=0; a<v ; a++) {
			m[a] = new int[v];
			for(int b=0; b<v; b++)
				m[a][b]=0;
		}
		for(int a=0; a<e ;a++) {
			cin>>a1>>a2;
			m[a1-'a'][a2-'a'] = 1;
			m[a2-'a'][a1-'a'] = 1;

		}
		int conta = 0;
		cout<<"Case #"<<contadorP<<":"<<endl;
		for (int a=0; a<v; a++){
			if(!marcados[a]){
				bfs(m,v,a, marcados);
				conta++;
			}
		}
		cout << conta<<" connected components"<<endl;
		cout<<endl;
		delete[]m;
	}
	return 0;
}
