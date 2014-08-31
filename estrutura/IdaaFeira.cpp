//https://www.urionlinejudge.com.br/judge/pt/problems/view/1281

#include<map>
#include<string>
#include<iostream>
#include <iomanip>
using namespace std;

int main ()
{
	map<string, float> valores;
	pair<string, float> ii;
	string fruta;
	int a,b,c;
	float d,total;
	cin>> a;
	while(a--)
	{
		total = 0;
		valores.clear();
		cin>>b;
		for(int i=0 ; i<b ; i++)
		{
			cin>>fruta>>d;
			ii.first=fruta;
			ii.second=d;
			valores.insert(ii);
		}
		cin>>b;
		for(int i=0 ; i<b ; i++)
		{
			cin>>fruta>>c;
			total += c*valores.find(fruta)->second;
		}
		cout<<fixed<<setprecision(2)<<"R$ "<<total<<endl;

	}
	return 0;
}
