#include <bits/stdc++.h>
#define lson (rt<<1)
#define rson (rt<<1|1)
#define mid ((l+r)>>1)
using namespace std;
 
int tree[1<<22];
int n, m;
void build(int d, int rt, int l, int r){
 if(r == l){
  cin >> tree[rt];
  return ;
 }
 build(d-1, lson, l, mid);
 build(d-1, rson, mid+1, r);
 if(d & 1) tree[rt] = tree[lson] | tree[rson];
 else
   tree[rt] = tree[lson] ^ tree[rson];
}
void modify(int d, int rt, int l, int r, int p, int v){
 if(l == r){
   tree[rt] = v;
   return ;
}
 else
  if(p <= mid) modify(d-1, lson, l, mid, p, v);
  else modify(d-1, rson, mid + 1, r, p, v);
  if( d & 1) tree[rt] = tree[lson] | tree[rson] ;
  else
    tree[rt] = tree[lson] ^ tree[rson];
} 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n >> m;
 build(n, 1, 1, 1<<n);
 while(m--){
  int p , b;
  cin >> p >> b;
  modify(n, 1, 1, 1 << n, p ,b);
  cout << tree[1] << endl;
 }
return 0;
}