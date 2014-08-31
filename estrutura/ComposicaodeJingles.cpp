//https://www.urionlinejudge.com.br/judge/pt/problems/view/1430

#include<string>
#include<iostream>
#include<stack>

using namespace std;

int main ()
{
	string compassos;
	stack<int>valores;

	int total = 0, mmc = 1, certos =0;

	while (cin>>compassos)
	{
		total = 0; mmc = 1; certos =0;
		if (compassos == "*")
			break;
		for (int a=0;a<compassos.size(); a++)
		{
			switch(compassos[a])
			{
			case 'W': {valores.push(1); if(1>mmc) mmc =1;}
			break;
			case 'H': {valores.push(2); if(2>mmc) mmc =2;}
			break;
			case 'Q': {valores.push(4); if(4>mmc) mmc =4;}
			break;
			case 'E': {valores.push(8); if(8>mmc) mmc =8;}
			break;
			case 'S': {valores.push(16); if(16>mmc) mmc =16;}
			break;
			case 'T': {valores.push(32); if(32>mmc) mmc =32;}
			break;
			case 'X': {valores.push(64); mmc=64;}
			break;
			case '/':
			{
				while (!valores.empty())
				{
					total += mmc/valores.top();
					valores.pop();

				}
				if (total == mmc)
					certos++;
				total = 0;
				mmc = 1;
			}
			}
		}
		cout << certos<<endl;
	}
	return 0;
}
