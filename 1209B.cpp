#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int b[1000000]; 
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n; cin >> n;
 vector<pair<int,int>> v(n);
 string str; cin >> str;
 string str1 = str;
 for(int i = 0; i < n; i++){ cin >> a[i] >> b[i] ; v.push_back(make_pair(b[i],i)); }
 sort(v.begin(),v.end());
 int cnt = 0;
 for(int i = 0; i < n; i++){
   if(str[i] == '1')
    cnt++;
 }
 int maxm = cnt;
 for(int i = 0; i < n; i++){
    int j = v[i].second;
    if(str1[j] =='0'){
       str1[j] = '1';
       cnt++;
    }
   else{
     str1[j] = '0';
      cnt--;
   }
 maxm = max(maxm,cnt);
}
maxm = max(maxm,cnt);
 for(int i = 0; i < n; i++){
   int k = v[i].second;
   v[i].first += a[k];
 }
 sort(v.begin(),v.end());
 int num = 0;
 cnt = 0;
for(int i = 0; i < n; i++){
   if(str1[i] == '1')
    cnt++;
 }
 while(num < 10000){
 for(int i = 0; i < n; i++){
    int j = v[i].second;
    v[i].first += a[j];
    if(str1[j] =='0'){
       str1[j] = '1';
       cnt++;
    }
   else{
     str1[j] = '0';
      cnt--;
   }
 maxm = max(maxm,cnt);
}
num++;
}
 maxm = max(maxm,cnt);
 cout << maxm << endl;
 return 0;
}
