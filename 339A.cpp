#include<bits/stdc++.h>
using namespace std;
int main()
{
string str,st;
cin >> str;
int n = str.size();
for(int i=0; i<n; i++){
    st = st+str[i];
    i++;
}
sort(st.begin(),st.end());
n=st.size();
for(int i=0;i<n-1;i++){
   cout<<st[i]<<'+';
}
cout<<st[n-1];



return 0;
}