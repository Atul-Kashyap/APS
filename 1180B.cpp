#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long n,a,minm = 999999999,pos=0,neg=0,i;
 vector<long long> v;
 int flag = 0;
 cin >> n;
 for(i=0 ; i<n; i++){
  cin >> a;
 if(a >= 0)
 pos++;
 else
  neg++;
  minm = min(minm,a);
  v.push_back(a);
 }
 if(n % 2 != 0){
 i=0;
 if(neg % 2 ==0){
     n = n - neg;
     for(i=0; i<n-2; i++){
      if(v[i] == minm)
      flag +=1;

   if(v[i] >=0 && flag == 0){
    v[i] = (v[i] * -1) -1;
    
   }
  else if(v[i] >=0 && flag > 1){
    v[i] = (v[i] * -1) -1;
      
  }

    }

 }
 else if(pos >= neg){
 while(pos != neg && i<n)
 {
   if(v[i] == minm)
     flag +=1;

   if(v[i] >=0 && flag == 0){
    v[i] = (v[i] * -1) -1;
    pos--;
    neg++;
   }
  else if(v[i] >=0 && flag > 1){
    v[i] = (v[i] * -1) -1;
    pos--;
    neg++;
  }
  i++;
 }
}
 else{
  i=0;
  while(pos != neg && i<n)
 {
   if(v[i] == minm)
     flag +=1;

   if(v[i] <0 && flag == 0){
    v[i] = (v[i] * -1) -1;
     neg--;
     pos++;
   }
  else if(v[i] <0 && flag > 1){
    v[i] = (v[i] * -1) -1;
    neg--;
    pos++;
  }
  i++;
 }

 }
}
 else {
 for(int i=0; i<n; i++)
 {
   if(v[i] >=0 )
    v[i] =(v[i] * -1) -1;
 }
 }
 for(i=0; i<n; i++)
 cout << v[i] <<" ";
 cout << endl;
return 0;
}