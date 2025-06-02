#include<bits/stdc++.h>
using namespace std;

int t;

void solve(int n, string s) {
    string ans = "Alice";

    int cA=0, cB=0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'A') {
            if (i==n-1 && s[0] != 'B') {
                ans = "Alice";
            }

            else if (i!=n-1) {
                ans = "Alice";
                cA++;
            }
        }

        else {
            if (i==n-1 && cB!=0) {
                ans = "Bob";
            }

            else if (i!=n-1) {
                ans = "Bob";
                cB++;
            }
        }
    }

    cout << ans << '\n';

    return;
}

int main() {
    freopen("INPUT.inp", "r", stdin);
    freopen("OUTPUT.out", "w", stdout);

    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        solve(n, s);
    }

    return 0;
}
