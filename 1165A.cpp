#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X, Y;
    string number;
    cin >> N >> X >> Y >> number;
    int change = 0;
    reverse(number.begin(), number.end());

    for (int i = 0; i < X; i++)
        if ((number[i] == '1') ^ (i == Y))
            change++;

    cout << change << '\n';
}
/*
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
// cout.tie(0);
 int x,y,n,cnt = 0;
 string str1;
 cin >> n >> x >> y >> str1;
 reverse(str1.begin(),str1.end());
 for(int i=0; i<x; i++)
   if((str1[i] == '1') ^ (i == y))
   cnt++;

 cout << cnt << '\n';
 return 0;
}

 */


