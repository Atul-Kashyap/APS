#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int r,g,y,b,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
 string str; cin >> str;
 int n = str.size();
 for(int i = 0 ; i < n; i++){
  if(str[i] == 'R' && cnt1 == 0){
    r = (i+1) % 4;
    cnt1++;
  }
  if(str[i] == 'G' && cnt2 == 0){
   g = (i+1)%4;
   cnt2++;
 }
 if(str[i] == 'Y' && cnt3 == 0){
   y = (i+1)%4;
   cnt3++;
 }
 if(str[i] == 'B' && cnt4 == 0){
   b = (i+1)%4;
   cnt4++;
 }
 }
 cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0;
 for(int i = 0; i < n; i++){
  if(str[i] == '!'){
    if((i+1) % 4 == r)
      cnt1++;
   if((i+1) % 4 == g)
      cnt2++;
   if((i+1) % 4 ==y)
      cnt3++;
   if((i+1) % 4 == b)
      cnt4++;
  }
}
 cout << cnt1 << " " << cnt4 << " " << cnt3 << " " << cnt2 << endl;
return 0;
}