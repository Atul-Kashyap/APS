#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,cnt = 0;
 string str;
 cin >> n >> str;
 for(int i = 0; i < n; i++){
   if(str[i] == str[i+1]){
      str.erase(str.begin()+i);
      cnt++;
      i -= 2;
   }
  i += 1;
 }
 cout << cnt << endl;
 cout << str << endl;
 return 0;
}