#include <bits/stdc++.h>

using namespace std;

const int N = int(3e5) + 99;

int n, m;
int l[N], r[N], s[N];
int d[N];
int dx[N];
int res[N];
int nxt[N];

int main() {
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; ++i){
		scanf("%d %d %d", s + i, l + i, r + i);
		--l[i], --r[i];
		if(s[i] == 1)
			++d[l[i]], --d[r[i]];
	}
        for(int i = 0; i < n; i++)
          cout << d[i] << " ";
          cout << endl;

	memset(dx, -1, sizeof dx);
	int sum = 0;
	for(int i = 0; i < n - 1; ++i){
		sum += d[i];
		if(sum > 0)	
			dx[i] = 0;
	}		

	res[0] = n;
	for(int i = 1; i < n; ++i)
		res[i] = res[i - 1] + dx[i - 1];
               
                
	

	nxt[n - 1] = n - 1;
	for(int i = n - 2; i >= 0; --i){
		if(res[i] <= res[i + 1])
			nxt[i] = nxt[i + 1];
		else 
			nxt[i] = i;
	}
	

	for(int i = 0; i < m; ++i){
		if(s[i] != (nxt[l[i]] >= r[i])){
			puts("NO");
			return 0;		
		}
	}	

	puts("YES");
	for(int i = 0; i < n; ++i)
		printf("%d ", res[i]);
	puts("");

	return 0;
}                             	
/*
----------------------------radewoosh----------------------------------------------------
using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
const int nax=1000*1007;
 
int n, m;
 
int tab[nax];
 
int per[nax];
 
vector <pii> nope;
 
int czy(int a, int b)
{
	for (int i=a; i<b; i++)
		if (per[i]>per[i+1])
			return 0;
	return 1;
}
 
int main()
{
	scanf("%d%d", &n, &m);
	for (int i=1; i<=m; i++)
	{
		int t, a, b;
		scanf("%d%d%d", &t, &a, &b);
		if (t)
		{
			tab[a]++;
			tab[b]--;
		}
		else
		{
			nope.push_back({a, b});
		}
	}
	for (int i=1; i<=n; i++)
		tab[i]+=tab[i-1];
	int k=2*n;
	int v=1;
	while(v<=n)
	{
		int w=0;
		while(tab[v+w])
			w++;
		k--;
		for (int i=0; i<=w; i++)
			per[v+i]=k;
		v+=w+1;
	}
	debug() << range(per+1, per+1+n) << nope;
	for (pii i : nope)
	{
		if (czy(i.first, i.second))
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	for (int i=1; i<=n; i++)
		printf("%d ", per[i]);
	printf("\n");
	return 0;
} */