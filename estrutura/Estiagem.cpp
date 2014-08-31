//https://www.urionlinejudge.com.br/judge/pt/problems/view/1023

#include<map>
#include<iostream>
#include <iomanip>
#include<cmath>
#include<cstdio>

using namespace std;

int main ()
{
	int  frac_part,n, x, y, contador = 0;
	double int_part,c,d;
	map<int, int>consumo;
	map<int,int>::iterator it;

	while (cin>>n && n!=0)
	{
		if(contador>0 && n!=0)
			printf("\n");
		c = d = 0.00;
		contador++;
		consumo.clear();
		for (int a=0; a<n; a++)
		{
			cin>>x>>y;
			consumo[y/x] += x;
			c+=x;
			d+=y;

		}
		int a=1;
		cout<<"Cidade# "<<contador<<":\n";
		for (std::map<int,int>::iterator i=consumo.begin(); i!=consumo.end(); ++i){
			if(a == consumo.size())
				std::cout << i->second << "-" << i->first<<endl;
			else
				std::cout << i->second << "-" << i->first <<" ";
			a++;
		}
		frac_part = (int) (modf ( (double)d/c, &int_part) *100);
		if(frac_part < 10)
			printf("Consumo medio: %d.0%d m3.\n", (int)int_part, (int)frac_part);
		else
			printf("Consumo medio: %d.%d m3.\n", (int)int_part, (int)frac_part);
	}
	return 0;
}
