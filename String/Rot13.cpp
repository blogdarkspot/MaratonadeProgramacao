//https://www.urionlinejudge.com.br/judge/pt/runs/code/655953
#include <iostream>
#include <string>
using namespace std;
int main () {
	string linha;

	while (getline(cin, linha))	{
		for (int a=0 ; a<linha.size(); a++)	{
			if ((linha[a]>=65 && linha[a]<=90)||(linha[a]>=97 && linha[a]<=122)){
				if((linha[a]+13>90 && linha[a]+13<=103)||(linha[a]+13>122))
					linha[a] -= 13;
				else
					linha[a]+=13;
			}
		}
		cout << linha<<endl;
	}
	return 0;
}
