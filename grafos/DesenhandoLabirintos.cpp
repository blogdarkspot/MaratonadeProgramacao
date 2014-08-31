//https://www.urionlinejudge.com.br/judge/pt/problems/view/1076

#include<iostream>
using namespace std;
void dfs (int**g, int n, bool *marcados, int v, int *cont) {
	marcados[v]= true;
	for(int a=0; a<n ;a++) {
		if(g[v][a]==1) {
			if(!marcados[a]) {
				*cont = *cont+1;
				dfs(g,n,marcados,a,cont);
				*cont = *cont+1;
			}
		}

	}

}

int main()
{
	int **m, n, a, v;
	cin>>n;
	while(n--){
		int comeco;
		cin>>comeco>>v>>a;
		m = new int*[v];
		for (int ad=0; ad<v; ad++) {
			m[ad] = new int[v];
			for(int b=0; b<v; b++)
				m[ad][b]=0;
		}
		for(int ad=0; ad<a; ad++ ) {
			int x,y;
			cin>>x>>y;
			m[x][y]=1;
			m[y][x]=1;
		}
		bool *marcados = new bool[v];
		for (int ad=0; ad<v ;ad++)
			marcados[ad]=false;
		int cont = 0;
		dfs(m,v,marcados,comeco,&cont);
		cout<<cont<<endl;
		delete[] marcados;
	}
	return 0;
}
