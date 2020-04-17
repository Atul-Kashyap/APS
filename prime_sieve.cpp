// prime sieve algorithm to find prime number
// Time complexity O(NloglogN)
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> prime_sieve(ll n)
{

 vector<ll> primes(n,1);

 for(ll i = 4; i <= n; i += 2)
 primes[i] = 0;

 for(ll i = 3; i*i <= n; i += 2){
    if(primes[i]){  
      for(ll j = i*i; j <= n; j += i)
          primes[j] = 0;
   }
 }
 primes[0] = primes[1] = 0;
 return primes;
}

int main()
{

 ios_base::sync_with_stdio(false); cin.tie(NULL);
 ll n; cin >> n;

 vector<ll> p = prime_sieve(n);

// print prime number from 2 to n;
 for(ll i = 0; i <= n; i++){
  if(p[i])
  cout << i << " ";
 }
 cout << endl;

 return 0;
}