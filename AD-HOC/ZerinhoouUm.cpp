//https://www.urionlinejudge.com.br/judge/pt/problems/view/1467

#include <cstdio>
#include <iostream>
int main (){
	int a,b,c;
	while(std::cin>>a>>b>>c){
		if(a!=b || b!=c){
			if  (a!=c){
				if (a!=b)
					printf("A\n");
				else
					printf("C\n");
			}
			else{
				printf("B\n");
			}

		}
		else
			printf("*\n");
	}
	return 0;
}
