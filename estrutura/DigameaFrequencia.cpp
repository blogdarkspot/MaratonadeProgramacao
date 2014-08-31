https://www.urionlinejudge.com.br/judge/pt/problems/view/1251
#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)

#define ff first
#define se second
#define inf (1<<30)                                              //infinity value
#define pb push_back
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;

ll gcd(ll a, ll b)
{
	if (b==0) return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
	return a/gcd(a, b)*b;
}

bool cmp(ll a,ll b)
{
	return a > b;
}

int main()
{
	string s;
	int f=0;
	while(getline(cin,s))
	{
		if(f)
			pf("\n");
		int l=s.size();
		map<int,int>mp;
		map<char,int>mp1;
		priority_queue<int>pq;
		for(int i=0;i<l;i++)
		{
			mp[s[i]]++;
		}
		for(int i=0;i<l;i++)
		{

			if(mp1[s[i]]==0){
				pq.push(-mp[s[i]]);
				mp1[s[i]]++;
			}
		}
		while(!pq.empty())
		{
			map<int,int>:: iterator it;
			int a=-pq.top();
			for(it=mp.end();;it--)
			{
				if(a==it->se)
				{
					cout<<it->ff<<" "<<it->se<<endl;
					it->se=0;
					break;
				}
			}
			pq.pop();
		}
		f=1;
	}
	return 0;
}
