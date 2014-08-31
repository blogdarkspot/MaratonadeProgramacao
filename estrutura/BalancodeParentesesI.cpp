//https://www.urionlinejudge.com.br/judge/pt/problems/view/1068

#include <string>
#include <iostream>

using namespace std;

int main ()
{
	int a, test;
	string expressao;
	while (cin>>expressao)
	{
		test=0;
		a = expressao.size();
		while (a--&& test>=0)
		{
			if (expressao[a]=='(')
				test--;
			if (expressao[a]==')')
				test++;
		}

		if (test==0)
			cout<<"correct"<<endl;
		else
			cout<<"incorrect"<<endl;
	}
	return 0;
}
