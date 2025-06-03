#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int a[n+1];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int ans=0, target=a[k-1];
    for (int i=0; i<n; i++) {
        if (a[i]==0) continue;
        if (a[i] >= target) ans++;
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
