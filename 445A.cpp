#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

template<class T> T max(T a, T b, T c) {
    return max(a, max(b, c));
}

int nextInt() {
    int x = 0, p = 1;
    char c;
    do {
        c = getchar();
    } while (c <= 32);
    if (c == '-') {
        p = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * p;
}

const int maxn = 111111;

int n;
map<int, int> m;
vector<pair<int, int> > v;
long long f[maxn];

int main() {
    
    n = nextInt();
    while (n--) {
        int x = nextInt();
        m[x]++;
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        v.push_back(make_pair(it->first, it->second));
    }
    for (int i = 0; i < (int)v.size(); i++) {
        int pr = i - 1;
        while (pr >= 0 && v[pr].first + 1 == v[i].first) pr--;
        if (pr == -1) f[i] = 1LL * v[i].first * v[i].second;
        else f[i] = f[pr] + 1LL * v[i].first * v[i].second;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[(int)v.size() - 1] << '\n';
}