#include<bits/stdc++.h>
using namespace std;

int t;

struct obj {
    int l, r;
};

void solve() {
    int n;
    cin >> n;

    int d[n+1];
    for (int i=0; i<n; i++) {
        cin >> d[i];
    }

    obj h[n+1];
    for (int i=0; i<n; i++) {
        cin >> h[i].l >> h[i].r;
    }

    int cur=0;
    vector<int> last;
    for (int i=0; i<n; i++) {
        if (d[i]==-1) {
            last.push_back(i);
        }

        else {
            cur += d[i];
        }

        while (cur < h[i].l) {
            if (last.empty()) {
                cout << -1 << '\n';
                return;
            }

            d[last.back()]=1;
            cur++;
            last.pop_back();
        }

        while (cur + last.size() > h[i].r) {
            if (last.empty()) {
                cout << -1 << '\n';
                return;
            }

            d[last.back()]=0;
            last.pop_back();
        }
    }

    for (int i=0; i<n; i++) {
        cout << max(0, d[i]) << " ";
    }

    cout << '\n';

    return;
}

int main() {
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
