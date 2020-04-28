#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
const int nax=1000*1007;
const ll mod=1000*1000*1000+7;
 
int n;
 
ll l[nax];
ll r[nax];
 
ll zm2, zm;
 
ll tu[nax];
 
ll dlu[nax];
 
ll dziel(ll a, ll b)
{
	//~ debug() << a << " " << b;
	a%=mod;
	b%=mod;
	ll wyk=mod-2;
	while(wyk)
	{
		if (wyk&1)
			a=(a*b)%mod;
		b=(b*b)%mod;
		wyk>>=1;
	}
	return a;
}
 
int main()
{
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
		scanf("%lld", &l[i]);
	for (int i=1; i<=n; i++)
		scanf("%lld", &r[i]);
	for (int i=1; i<n; i++)
	{
		ll wsz=(r[i]-l[i]+1)*(r[i+1]-l[i+1]+1)%mod;
		ll dob=0;
		ll a=max(l[i], l[i+1]);
		ll b=min(r[i], r[i+1]);
		if (a<=b)
			dob=b-a+1;
		dlu[i]=dob;
		ll x=dziel(mod+wsz-dob, wsz);
		zm=(zm+x)%mod;
		tu[i]=x;
	}
	ll s=0;
	//~ debug() << range(tu+1, tu+1+n);
	for (int i=2; i<=n; i++)
	{
		zm2=(zm2+tu[i]*s)%mod;
		s=(s+tu[i-1])%mod;
	}
	for (int i=1; i+2<=n; i++)
	{
		ll wsz=(r[i]-l[i]+1)*(r[i+1]-l[i+1]+1)%mod*(r[i+2]-l[i+2]+1)%mod;
		ll a=max(l[i], l[i+1]);
		ll b=min(r[i], r[i+1]);
		a=max(a, l[i+2]);
		b=min(b, r[i+2]);
		//~ debug() << imie(wsz);
		//~ debug() << imie(dlu[i]*(r[i+2]-l[i+2]+1));
		//~ debug() << imie(dlu[i+1]*(r[i]-l[i]+1));
		//~ debug() << imie(max(0LL, b-a+1));
		zm2+=dziel(wsz-dlu[i]*(r[i+2]-l[i+2]+1)-dlu[i+1]*(r[i]-l[i]+1)+max(0LL, b-a+1), wsz);
		zm2%=mod;
		zm2+=mod;
		zm2%=mod;
	}
	
	debug() << imie(zm);
	debug() << imie(zm2);
	
	zm2=(zm2*2+zm)%mod;
	
	printf("%lld\n", (zm2+2*zm+1)%mod);
	return 0;
}





    #include <bits/stdc++.h>
    using namespace std;
    #define rep(i,a,n) for (int i=a;i<n;i++)
    #define per(i,a,n) for (int i=n-1;i>=a;i--)
    #define pb push_back
    #define mp make_pair
    #define all(x) (x).begin(),(x).end()
    #define fi first
    #define se second
    #define SZ(x) ((int)(x).size())
    typedef vector<int> VI;
    typedef long long ll;
    typedef pair<int,int> PII;
    mt19937 mrand(random_device{}()); 
    const ll mod=1000000007;
    int rnd(int x) { return mrand() % x;}
    ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
    ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
    // head
     
    const int N=201000;
    int n,l[N],r[N];
    ll isz[N],dif[N],ans;
     
    int main() {
    	scanf("%d",&n);
    	rep(i,1,n+1) scanf("%d",l+i);
    	rep(i,1,n+1) scanf("%d",r+i);
    	++n;
    	l[n]=0, r[n]=0;
    	rep(i,1,n+1) isz[i]=powmod(r[i]-l[i]+1,mod-2);
    	ll ans=0;
    	rep(i,1,n) {
    		int pl=max(l[i],l[i+1]),pr=min(r[i],r[i+1]);
    		if (pl<=pr) dif[i]=(pr-pl+1)*isz[i]%mod*isz[i+1]%mod;
    		dif[i]=(mod+1-dif[i])%mod;
    		ans=(ans+dif[i])%mod;
    	}
    	ans=ans*ans%mod;
    	rep(i,1,n) {
    		ans=(ans-dif[i]*dif[i]+dif[i])%mod;
    	}
    	rep(i,1,n-1) {
    		ans=(ans-2*dif[i]*dif[i+1])%mod;
    		ll df=dif[i]+dif[i+1]-1;
    		int pl=max(max(l[i],l[i+1]),l[i+2]);
    		int pr=min(min(r[i],r[i+1]),r[i+2]);
    		if (pl<=pr) df=(df+(pr-pl+1)*isz[i]%mod*isz[i+1]%mod*isz[i+2])%mod;
    		ans=(ans+df*2)%mod;
    	}
    	if (ans<0) ans+=mod;
    	printf("%lld\n",ans);
    }























