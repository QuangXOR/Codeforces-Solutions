#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans=0;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;

        for (int i=0; i<2; i++) {
            if (s[i]==s[i+1]) {
                if (s[i]=='+') ans++;
                else ans--;
                break;
            }
        }
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
