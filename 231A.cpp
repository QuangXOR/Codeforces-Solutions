#include<bits/stdc++.h>
using namespace std;

int t;

void solve() {
    int n;
    cin >> n;

    int ans=0;
    for (int i=0; i<n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a+b+c >= 2) ans++;
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
