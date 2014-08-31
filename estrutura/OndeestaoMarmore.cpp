//https://www.urionlinejudge.com.br/judge/pt/problems/view/1025

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL
using namespace std;

int main ()
{
	int n, q;
	int cases = 0;

	while ( scanf ("%d %d", &n, &q) ) {
		if ( n == 0 && q == 0 ) break;

		int a [10000 + 10];

		for ( int i = 0; i < n; i++ ) scanf ("%d", &a [i]);

		sort (a, a + n);

		printf ("CASE# %d:\n", ++cases);

		int query;
		bool found;

		for ( int i = 0; i < q; i++ ) {
			scanf ("%d", &query);
			found = false;
			for ( int j = 0; j < n; j++ ) {
				if ( a [j] == query ) {
					printf ("%d found at %d\n", query, j + 1);
					found = true;
					break;
				}
				else if ( a [j] > query ) break;
			}

			if ( !found ) printf ("%d not found\n", query);
		}
	}

	return 0;
}
