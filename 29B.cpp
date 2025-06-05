#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l, d, v, g, r;
    cin >> l >> d >> v >> g >> r;

    double t = 1.0*d/v;
    double ans=0;
    double du = fmod(t, g+r);
    if (du < g) {
        ans = (double)l/v;
    }

    else {
        double wait = (g+r)-du;
        ans = (double)l/v + wait;
    }

    cout << fixed << setprecision(10) << ans;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
