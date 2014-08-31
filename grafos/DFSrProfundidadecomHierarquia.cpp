//https://www.urionlinejudge.com.br/judge/pt/problems/view/1081
#include<iostream>

using namespace std;

void dfs (int**g, int n, bool*marcados, int v, int*cont, bool *ver)
{
	marcados[v]= true;
	*cont = *cont+2;
	for(int a=0; a<n ;a++) {

		if(g[v][a]==1) {
			*ver = true;
			for(int c=0; c<*cont; c++)
				cout<<" ";
			cout<<v<<"-"<<a;
			if(!marcados[a]) {
				cout<<" pathR(G,"<<a<<")";
				cout<<endl;
				dfs(g,n,marcados,a,cont,ver);
				if(*cont>2)
					*cont = *cont - 2;
			}
			else
				cout<<endl;
		}
	}
}

int main() {
	int n,v,e,e1,e2,caso=0,conta=0, cont=0;
	bool ver = false;
	cin>>n;
	while (n--) {
		cin>>v>>e;
		int**graph = new int*[v+1];
		for(int a=0; a<=v; a++) {
			graph[a] = new int[v+1];
			for (int b =0; b<=v; b++)
				graph[a][b]=0;
		}
		for(int a=0; a<e; a++) {
			cin>>e1>>e2;
			graph[e1][e2]=1;
		}
		bool*check = new bool[v+1];
		for(int a=0; a<=v; a++)
			check[a]=false;
		caso++;
		cout<<"Caso "<<caso<<":"<<endl;
		for(int a=0;a<=v;a++) {
			if(check[a]==false){
				dfs(graph,v,check,a,&cont, &ver);
				cont =0;
				if(ver){
					cout<<endl;
					ver=false;
				}
			}
		}
		conta = 0;
		cont = 0;
		delete[] graph;
		delete[] check;

	}
	return 0;
}
