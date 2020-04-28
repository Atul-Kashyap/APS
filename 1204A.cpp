#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 string str; cin >> str;
 long long n = str.length();
 if(n % 2 == 0)
 cout << n/2 << endl;
 else{
   for(int i = n-1; i > 0; i--){
    if(str[i] == '1'){
     cout << n/2 + 1 << endl;
     return 0;
    }
 }
 cout << n/2 << endl; 
 }

return 0;
}