#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 vector<int> v1,v2;
 int n,even=0,odd=0,a,sum=0;
 cin>>n;
 for(int i=0;i<n;i++){
   cin>>a;
   if(a%2==0)
   {
    even++;
    v1.push_back(a);
   }
      else{
          odd++;
          v2.push_back(a);
    }
 }
if(even == odd | even + 1 == odd | even == odd + 1)
 {
  cout<<0<<endl;
 }
  else{
      if(odd > even + 1){
       sort(v2.begin(),v2.end());
       int m = odd -even-1 ;
       for(int i=0;i<m;i++)
         sum += v2[i];
       cout<<sum<<endl;
      }
       else {
        sort(v1.begin(),v1.end());
        int m = even - odd - 1;
         for(int i=0;i<m;i++){
          sum+=v1[i];
    
        }
        cout<<sum<<endl;
      }

  }


return 0;
}