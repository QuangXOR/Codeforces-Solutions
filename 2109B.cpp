#include<bits/stdc++.h>
using namespace std;

#define int long long

int t;

void solve(int n, int m, int a, int b) {
    vector<pair<int, int>> rec = {
        {a, m}, {n-a+1, m}, {n, b}, {n, m-b+1}
    };

    int ans=n+m;
    for (auto p : rec) {
        int x=p.first, y=p.second;
        int c=0;

        while (x*y > 1) {
            if (x >= y) {
                x = (x+1)/2;
            }

            else {
                y = (y+1)/2;
            }

            c++;
        }

        ans = min(ans, c);
    }

    cout << ans+1 << '\n';
}

signed main() {
    cin >> t;

    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        solve(n, m, a, b);
    }
}
