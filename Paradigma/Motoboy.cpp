//https://www.urionlinejudge.com.br/judge/pt/problems/view/1286

#include<iostream>

using namespace std;


int mochila (int*peso, int*valor, int qtoTotal, int qtoItens){
    int ** t = new int*[qtoItens];
    for (int a=0; a<qtoItens; a++){
        t[a] = new int[qtoTotal+1];
    }
    for (int a=0; a<qtoTotal+1; a++)
        t[0][a]=0;
    for (int k=1;k<qtoItens;k++)
        t[k][0]=0;
    for (int k=1; k<qtoItens;k++) {
        for (int d=1; d<qtoTotal+1; d++){
            t[k][d]=t[k-1][d];
            if(peso[k]<=d && valor[k]+t[k-1][d-peso[k]]>t[k][d])
                t[k][d] = valor[k]+t[k-1][d-peso[k]];
        }
    }
   return t[qtoItens-1][qtoTotal];
}



int main () {
    int n;
    while(cin>>n && n!=0){
        int *peso = new int[n+1];
        int *valor = new int[n+1];
        peso[0]=0;
        valor[0]=0;
        int p;
        cin>>p;
        for (int a=1; a<=n; a++)
            cin>>valor[a]>>peso[a];
    cout<<mochila(peso,valor,p,n+1)<<" min."<<endl;
    }
    return 0;
}
