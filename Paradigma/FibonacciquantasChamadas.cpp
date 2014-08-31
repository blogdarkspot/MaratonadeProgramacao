//https://www.urionlinejudge.com.br/judge/pt/problems/view/1029

#include<iostream>

using namespace std;

int total = 0;

long long Fib (long long n){
	total++;
	if(n==1)
		return 1;
	if (n==0)
		return 0;
	return Fib(n-1)+Fib(n-2);
}



int main (){

	long long a;
	int b;
	cin>>b;
	while (b--){
		cin>>a;
		total = 0;
		cout <<"fib("<<a<<") = "<<total-1<<" calls = "<<Fib(a)<<endl;
	}
	return 0;
}
