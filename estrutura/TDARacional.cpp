//https://www.urionlinejudge.com.br/judge/pt/problems/view/1022
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int  resto,aux,aux2, vezes, denominador, numerador;
	char operacao, lixo;
	int numeros[4];
	scanf("%d", &vezes);
	while (vezes--)
	{

		cin>>numeros[0]>>lixo>>numeros[1]>>operacao>>numeros[2]>>lixo>>numeros[3];

		switch(operacao)
		{
		case '+':
		{
			numerador = (numeros[0]*numeros[3]+numeros[2]*numeros[1]);
			denominador = numeros[1]*numeros[3];
		}
		break;
		case '-':
		{
			numerador = (numeros[0]*numeros[3]-numeros[2]*numeros[1]);
			denominador = numeros[1]*numeros[3];
		}
		break;
		case '*':
		{
			numerador = (numeros[0]*numeros[2]);
			denominador = numeros[1]*numeros[3];
		}
		break;
		case '/':
		{
			numerador = (numeros[0]*numeros[3]);
			denominador = numeros[1]*numeros[2];
		}
		break;
		}

		if(abs(numerador)>abs(denominador)){
			aux = abs(numerador);
			aux2 = abs(denominador);
		}
		else
		{
			aux2 = abs(numerador);
			aux = abs(denominador);
		}
		if (numerador!=0)
		{
			resto = aux%aux2;

			while (resto>=1)
			{
				aux = resto;
				resto = aux2%aux;
				aux2=aux;
			}
			printf("%d/%d = %d/%d\n", numerador, denominador, numerador/aux2, denominador/aux2);
		}
		else{
			printf("%d/%d = %d/%d\n", numerador, denominador, numerador, denominador);
		}
	}

	return 0;
}
