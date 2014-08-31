//https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

#include<vector>
#include<iostream>
#include<deque>
using namespace std;

int main ()
{
	vector<int> resto;
	deque<int> principal;
	int a;
	while (cin>>a && a!=0)
	{
		principal.clear();
		resto.clear();
		for (int b=a ; b>0 ; b--)
			principal.push_back(b);

		while(principal.size()!=1)
		{
			resto.push_back(principal.back());
			principal.pop_back();
			principal.push_front(principal.back());
			principal.pop_back();

		}
		cout<<"Discarded cards: ";
		if(resto.empty())
			cout<<endl;
		for (vector<int>::iterator it = resto.begin(); it!=resto.end(); ++it)
		{
			if(it ==resto.end()-1)
				cout<<*it<<endl;
			else
				cout<<*it<< ", ";
		}
		cout<<"Remaining card: "<<principal.back()<<endl;
	}
	return 0;
}
