#include<bits/stdc++.h>
#define pb push_back
#define rep(i,n) for(long long i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef vector<long long > vll;
const int N = 1e5;
const int k = 16;
const int ZERO = 1e9 + 1;
ll table[N][k+1];
 int main(){
   ll n,q,a,x,cnt=0;
   vll v;
   cin >> n;
   rep(i,n){
    cin >> a;
    v.pb(a);
   }
   rep(i,n)
    table[i][0] = v[i];

   for(long long j = 1; j <= k; j++) {
        for(long long i = 0; i <= n - (1 << j); i++)
            table[i][j] = __gcd(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
    }
  int L = 0,R = n-1;
  cin >> q; // number of queries
    for(int i = 0; i < q; i++) {
        cin >> x ;// boundaries of next query, 0-indexed
        int answer = ZERO,cnt = 0;
        for(int j = k; j >= 0; j--) {
            if(L + (1 << j) - 1 <= R) {
                answer = __gcd(answer, table[L][j]);
                if(answer == x)
                 cnt++;
                L += 1 << j; // instead of having L', we increment L directly
            }
        }
        cout << cnt << endl;
    }

    
 return 0;
}