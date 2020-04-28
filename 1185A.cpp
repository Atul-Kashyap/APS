#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
long long a,d,f=0,e;
vector<long long> v;
 for(int i=0;i<3; i++){
  cin >> a;
  v.push_back(a);
}
 cin >> d;

 sort(v.begin(),v.end());
 e = v[1] - v[0];
 if(e < d)
 f += d-e;
 e = v[2] - v[1];
 if(e < d)
 f += d-e;
cout << f << endl;
return 0;
}