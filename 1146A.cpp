#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin >> str;
int n = str.size();
int cnt = 0;
for(int i=0;i<n;i++){
 if(str[i]=='a')
 cnt++;
}
if(cnt > (n-cnt))
cout << n << endl;
else
cout << ((cnt*2)-1) << endl;

return 0;
}