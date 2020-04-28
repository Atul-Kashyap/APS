#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int cnt = 0,maxm = 0,c;
 int n; cin >> n;
    
   for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
     c = a[i];
   for(int j = i+1; j < n; j++){
       if(c >= a[j] ) { cnt++; c = a[j]; }
       else j = n;
   }
   c = a[i];
   for(int j = i; j >= 0; j--){
       if(c >= a[j]){ cnt++; c = a[j]; }
       else j = -10;   
   }
   maxm = max(cnt, maxm);
   cnt = 0;
 }
 cout << maxm << endl;
return 0;
}
/*
int a[1010];
 
int main(void){
    int N,i;
    
    scanf("%d",&N);
    REP(i,N) scanf("%d",&a[i]);
    
    int ans = 0;
    REP(i,N){
        int j = i;
        while(j > 0 && a[j-1] <= a[j]) j--;
        int k = i;
        while(k < N-1 && a[k+1] <= a[k]) k++;
        ans = max(ans,k-j+1);
    }
    
    cout << ans << endl;
    
    return 0;
}*/