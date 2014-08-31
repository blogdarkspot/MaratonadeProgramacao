//https://www.urionlinejudge.com.br/judge/pt/problems/view/1077
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	string in,pos;
	in = pos = "";
	cin >> n;
	while(n--)
	{
		stack<char> pilha;
		cin >> in;
		for(int i = 0;i < in.size(); i++)
		{
			switch(in[i])
			{
			case '(':
			case '^':
			pilha.push(in[i]);
			break;
			case ')':
				while(pilha.top() != '(')
				{
					pos+=pilha.top();
					pilha.pop();
				}
				pilha.pop();
				break;
			case '+':
			case '-':
				while(!pilha.empty() && pilha.top() != '(')
				{
					pos+=pilha.top();
					pilha.pop();
				}
				pilha.push(in[i]);
				break;
			case '*':
			case '/':
				while(!pilha.empty() && pilha.top() != '(' && pilha.top() != '+' && pilha.top() != '-')
				{
					pos+=pilha.top();
					pilha.pop();
				}
				pilha.push(in[i]);
				break;
			default:
				pos += in[i];
				break;
			}
		}
		while(!pilha.empty())
		{
			pos+=pilha.top();
			pilha.pop();
		}
		cout << pos << endl;
		pos = "";
	}
	return 0;
}
