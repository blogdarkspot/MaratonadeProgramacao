//https://www.urionlinejudge.com.br/judge/pt/problems/view/1252
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
using namespace std;

struct input {
    int num;
    int mod;
} a [10000 + 10];

int n;
int m;

bool odd (int x)
{
    if ( x < 0 ) x *= -1;
    if ( x % 2 ) return true;
    return false;
}

bool even (int x)
{
    if ( x < 0 ) x *= -1;
    if ( x % 2 == 0 ) return true;
    return false;
}

bool operator< (input a, input b)
{
    if ( a.mod < b.mod ) return true;

    if ( a.mod == b.mod ) {
        if ( odd (a.num) && even (b.num) ) return true;
        if ( odd (a.num) && odd (b.num) && a.num > b.num ) return true;
        if ( even (a.num) && even (b.num) && a.num < b.num ) return true;
    }

    return false;
}

int main ()
{
    while ( scanf ("%d %d", &n, &m) ) {

        if ( n == 0 && m == 0 ) {
            printf ("0 0\n");
            break;
        }

        printf ("%d %d\n", n, m);

        for ( int i = 0; i < n; i++ ) {
            scanf ("%d", &a [i].num);
            a [i].mod = a [i].num % m;
        }

        sort (a, a + n);

        for ( int i = 0; i < n; i++ )
            printf ("%d\n", a [i].num);

    }

    return 0;
}
