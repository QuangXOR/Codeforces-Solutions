#include<bits/stdc++.h>
using namespace std;

struct horse {
    int l, r, t, c;
} a[102];

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i=1; i<=m; i++) {
        int l, r, t, c;
        cin >> a[i].l >> a[i].r >> a[i].t >> a[i].c;
    }

    int ans=0;
    for (int i=1; i<=n; i++) {
        int best_time=1e9;
        int best_idx = 0;

        for (int j=1; j<=m; j++) {
            if (a[j].l <= i && i <= a[j].r) {
                if (a[j].t < best_time) {
                    best_time = a[j].t;
                    best_idx = j;
                }
            }
        }

        ans += a[best_idx].c;
    }

    cout << ans;

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
