//https://www.urionlinejudge.com.br/judge/pt/problems/view/1273

#include <iostream>

using namespace std;

int main()
{
	int n;
	int maior;
	int j = 0;
	while (cin >> n && n!= 0) {
		string v[n];
		for (int i = 0; i < n; i++) {
			cin >> v[i];

			if (i == 0)
				maior = v[i].length();
			else
				if (v[i].length() > maior)
					maior = v[i].length();
		}
		if (j!= 0)
			cout << endl;
		for (int i = 0; i < n; i++) {
			j++;
			int q = maior - v[i].length();
			while(q--) {
				cout << " " ;
			}
			cout << v[i] << endl;
		}
	}
	return 0;
}
