#include<iostream>
#include<cstdio>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int main() {

	unsigned long int a , b  ;


	while (cin >> a>>b  && !cin.eof()){

		printf("%u\n", a^b);
	}
	return 0;
}
