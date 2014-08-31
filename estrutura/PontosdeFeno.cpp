//https://www.urionlinejudge.com.br/judge/pt/problems/view/1261

#include<iostream>
#include<string>
#include<cstdio>
#include<map>

using namespace std;




int main ()
{

	string buffer;
	map<string, int> dic;
	int i,j,k, total = 0;

	cin>>i>>j;

	total = 0;
	dic.clear();
	while(i--)
	{
		cin>>buffer>>k;
		dic[buffer]=k;
	}
	while (getline(cin, buffer))
	{

		for (int a=0, b=0, c=0; a<buffer.size(); a++)
		{

			while(buffer[a]!=' ' && a<buffer.size() && buffer[a]!='.')
			{
				a++;
				c++;
			}

			if (a!=b && dic.count(buffer.substr(b,c))>0)
				total+=dic.find(buffer.substr(b,c))->second;
			if(buffer[a]=='.')
			{
				cout<<total<<endl;
				total=0;
			}

			b = a+1;
			c =0;
		}
	}

	return 0;
}
