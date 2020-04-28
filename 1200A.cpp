#include<bits/stdc++.h>
using namespace std;
int a[15];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 long long n; string str;
 memset(a,10,0);
 cin >> n >> str;
 for(int i = 0; i < n; i++) {
  if(str[i] == 'L'){
     int j = 0;
     int flag = 0;
    while(flag == 0 && j <= 9){
     if(a[j] == 0) { a[j] = 1; flag = 1;} j++; 
 }
 }
 else if(str[i] == 'R'){
    int j = 9;
    int flag  = 0;
    while( flag == 0 && j >= 0){
     if(a[j] == 0) { a[j] = 1; flag = 1;} j--;
   }
 }
 else{
      int j = (int)str[i] - 48 ;
      a[j] = 0; 
 }

 }

 for(int i = 0; i < 10; i++) cout << a[i];
 cout << endl;
return 0;
}