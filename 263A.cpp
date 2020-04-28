#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a[5][5],b,c,d;
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
     cin>>b;
     a[i][j]=b;
      if(b==1){
        c=i;
        d=j;
      }
    }
 }
int res = abs(2-c) + abs(2-d);
cout << res << endl;


return 0;
}