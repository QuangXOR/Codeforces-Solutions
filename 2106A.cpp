#include<bits/stdc++.h>
using namespace std;

int t;

void solve() {
    int n;
    string s;

    cin >> n >> s;

    int ones=0, zeros=0;
    for (int i=0; i<n; i++) {
        if (s[i]=='0') zeros++;
        else ones++;
    }

    int ans = (ones-1)*ones + (ones+1)*zeros;

    cout << ans << '\n';

    return;
}

int main() {
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
