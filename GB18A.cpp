#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	cout << min({ a * 3 + 3,b * 3,c * 3 - 3 })<<endl;
	return 0;
}