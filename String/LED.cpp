//https://www.urionlinejudge.com.br/judge/pt/problems/view/1168
#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int main ()
{
	string numero;
	int ocorrencias, total = 0;
	scanf("%d", &ocorrencias);
	for (int a = 0; a<ocorrencias; a++)
	{
		cin>>numero;
		for (int a = 0; a<numero.length();a++)
		{
			switch(numero[a])
			{
			case '0': total+=6; break;
			case '1': total+=2; break;
			case '2': total+=5; break;
			case '3': total+=5; break;
			case '4': total+=4; break;
			case '5': total+=5; break;
			case '6': total+=6; break;
			case '7': total+=3; break;
			case '8': total+=7; break;
			case '9': total+=6; break;
			}

		}
		cout << total<<" leds"<<endl;
		total = 0;
	}
	return 0;
}
