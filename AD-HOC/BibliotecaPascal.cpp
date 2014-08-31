//https://www.urionlinejudge.com.br/judge/pt/problems/view/1267
#include <iostream>
using namespace std;
int main () {
	int a, b, k;
	while (cin>>a>>b && (a!=0 && b!=0)) {
		int vetor[a];
		for (int c=0; c<a;c++)
			vetor[c]=0;
		for (int c=0; c<b ;c++) {
			for(int j=0; j<a;j++) {
				cin>>k;
				vetor[j]+=k;
			}
		}
		k=0;
		for(int j=0; j<a; j++) {
			if (vetor[j]==b) {
				k = 1;
				j = a;
			}
		}
		if (k)
			cout <<"yes"<<endl;
		else
			cout <<"no"<<endl;
	}
	return 0;
}
