//https://www.urionlinejudge.com.br/judge/pt/problems/view/1401

#include <string>
#include <algorithm>
#include <iostream>

using namespace std;


int main (){
	int j;
	string str;
	cin>>j;
	while(j--){
		cin>>str;
		sort (str.begin(), str.end());
		cout<<str<<endl;
		while (next_permutation(str.begin(), str.end()))
			cout<<str<<endl;
		cout<<endl;
	}
	return 0;
}
