#include<bits/stdc++.h>
using namespace std; 
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 long long  t; cin >> t;
 while(t--){
 long long a,b,n; cin >> a >> b >> n;
 if(n == 0) cout << a << endl;
 else if (n == 1) cout << b << endl;
 else if ( n % 6 == 2 || n % 6 == 5)
  cout << ( a ^ b ) << endl;
 else if( n % 6 == 4 || n % 6 == 1)
  cout << b << endl;
 else if( n % 6 == 0 || n % 6 == 3)
   cout << a << endl; 
    
 }
 
 
return 0;
}

 
