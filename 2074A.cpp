#include<bits/stdc++.h>
using namespace std;

int t;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a==b && b==c && c==d) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return;
}

int main() {
    cin >> t;

    while (t--) {
        solve();
    }
}
