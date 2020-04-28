#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,m,a[52][52],b[52][52];
 cin >> n >> m;

 for(int i=0; i<n; i++)
  for(int j=0;j<m;j++)
    cin >> a[i][j];

 for(int i=0; i<n; i++)
  for(int j=0;j<m;j++)
    cin >> b[i][j];

 for(int i=0; i<n; i++){
  for(int j=0;j<m;j++)
    cout << a[i][j] << " ";
    cout << endl;}



return 0;
}