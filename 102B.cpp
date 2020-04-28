#include<bits/stdc++.h>
using namespace std;
int main()
{
string str; cin >> str;
int n = str.size();
int cnt = 0,sum = 0;
while(str.size() != 1){
 cnt++;
 for(int i = 0; i < str.size(); i++)
   int sum = sum + (int)(str[i] - '0');
 str = (string) sum;
}
cout << cnt << endl;
return 0;
}