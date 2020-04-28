#include<bits/stdc++.h>
using namespace std;
int main()
{
string str1,str2;
cin >> str1;
int n = str1.size();
for(int i=0; i<n; i++)
{
 if(str1[i] != 'a')
   str2[i] = str2 + str1[i];
}
cout<<str2;
return 0;
}