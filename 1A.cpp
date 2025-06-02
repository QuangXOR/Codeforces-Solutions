#include<bits/stdc++.h>
using namespace std;

#define int long long

int n, m, a;

signed main() {
    cin >> n >> m >> a;

    int l=(n-1)/a+1;
    int w=(m-1)/a+1;

    cout << l*w;

    return 0;
}
