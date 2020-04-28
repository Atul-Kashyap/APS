#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
#define vch vector<char>
using namespace std;
int main()
{
string str;
vch v;
cin>>str;
int n=str.size();
int i;
f(i,0,n){
if(str[i]=='a' | str[i]=='A'|str[i]=='e'|str[i]=='E'|str[i]=='i'|str[i]=='I'|str[i]=='o'|str[i]=='O'|str[i]=='u'|str[i]=='U'|str[i]=='y'|str[i]=='Y')
continue;
else
{
int c=int(str[i]);
if(c >=65 & c <=90 ){
 int n=c-65;
 n=n+97;
 char c=char(n);
char d='.';
 v.push_back(d);
 v.push_back(c);

}
else if(c >=97 & c<=122){
 char d='.';
  v.push_back(d);
  v.push_back(str[i]);

}


}
}
for(char i:v)
cout<<i;
cout<<endl;
return 0;
}