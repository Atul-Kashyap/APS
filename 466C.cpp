#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cnt[10000000]; 
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); 
 ll n,sum = 0; cin >> n;
 vector<ll> v(n); for(ll &a : v(n)) {cin >> a;  sum += a; }
 if( sum % 3 != 0){ cout << 0 << endl; return 0; }
 else {
    ll ss = 0;
    memset(cnt,0,sizeof(cnt));
    for(ll i = n-2; i >= 0; i++){
        ss += v[i];
        if(ss == sum/3)
         cnt[i] = 1;
    }
   for(int i = 

  }










 return 0;
}

































/*

    #include <iostream>
    #include <math.h>
     
    using namespace std;
     
    int a[1000010];
    long long cnt[1000010];
     
    int main()
    {
        ios::sync_with_stdio(0);
        int n;
        cin >> n;
        long long s = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % 3 != 0)
            cout << "0\n";
        else {
            s /= 3;
            long long ss = 0;
            for(int i = n-1; i >= 0 ; --i)
            {
                ss += a[i];
                if (ss == s)
                    cnt[i] = 1;
            }
            for(int i = n-2 ; i >= 0 ; --i)
                cnt[i] += cnt[i+1];

            long long ans = 0;
            ss = 0;
            for(int i = 0 ; i+2 < n ; ++i) {
                ss += a[i];
                if (ss == s)
                    ans += cnt[i+2];
            }
            cout << ans << "\n";
        }
        return 0;
    }



  res = 0;
 
  sum = 0;
  rep(i,N) sum += A[i];
  if(sum % 3 == 0){
    S[0] = 0;
    rep(i,N) S[i+1] = S[i] + A[i];
 
    for(i=N-1;i;i--){
      cnt[i] = cnt[i+1];
      if(S[i] == sum / 3) res += cnt[i];
      if(S[i] == sum / 3 * 2) cnt[i]++;
    }
  } */