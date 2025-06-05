#include<bits/stdc++.h>
using namespace std;

#define int long long

int t;

void solve () {
    int x;
    cin >> x;

    int ans=0, a=0, b=0, c=0;
    while (min({a, b, c}) < x) {
        if (a<=b && a<=c) {
            a = min(b, c)*2+1;
        }

        else if (b<=a && b<=c) {
            b = min(a, c)*2+1;
        }

        else {
            c = min(a, b)*2+1;
        }

        ans++;
    }

    cout << ans << '\n';

    return;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
