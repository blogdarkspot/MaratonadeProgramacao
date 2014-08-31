//https://www.urionlinejudge.com.br/judge/pt/problems/view/1244

#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;
bool cmp (string x, string y)
{
	if (x.size()>y.size()) return true;
	return false;
}
int main ()
{
	string texto;
	vector<string> ordena;
	int n;
	scanf ("%d ", &n);
	while (n--)
	{
		ordena.clear();
		getline (cin, texto);
		char *cstr = new char[texto.length()+1];
		strcpy(cstr, texto.c_str());
		char *p = strtok (cstr, " ");
		while (p!=0)
		{
			ordena.push_back(p);
			p=strtok(NULL," ");
		}
		stable_sort (ordena.begin(), ordena.end(), cmp);

		for (int a=0; a<ordena.size(); a++)
			if (a==ordena.size()-1)
				cout<<ordena[a];
			else
				cout<<ordena[a]<<" ";

		cout<<endl;
	}
	return 0;
}
