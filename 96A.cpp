//method 1
/*
#include<bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string s;
	cin >> s;
	for(int i=0; i+7<=s.size(); i++){
        if(s.substr(i,7)=="0000000" || s.substr(i,7)=="1111111")return cout << "YES", 0;
	}
	cout << "NO";
}*/


//method 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
int cnt=1;
cin>>s;
int n=s.size();
for(int i=0;i<n-1;i++){
   if(s[i]==s[i+1]){
   cnt++;
     if(cnt>=7){cout<<"YES";break;}  
   }
      else 
       cnt=1;
 }
if(cnt<7)
cout<<"NO";
return 0;
} 


