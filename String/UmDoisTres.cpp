//https://www.urionlinejudge.com.br/judge/pt/problems/view/1332
#include<iostream>
using namespace std;
int main()
{
	string p;
	int n;

	cin >> n;

	while(n--){
		cin >> p;
		if (p.size() == 5)
			cout << 3 << endl;
		else {
			string one, two;
			int ione, itwo;
			one = "one";
			two = "two";
			ione = itwo = 0;

			for(int i = 0; i < 3; i++){
				if (p[i] == one[i])
					ione++;
				else if (p[i] == two[i])
					itwo++;
			}
			if(ione > itwo)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
	}

	return 0;
}
