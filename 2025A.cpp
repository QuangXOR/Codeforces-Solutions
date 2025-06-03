#include<bits/stdc++.h>
using namespace std;

int q;

void solve(string s, string t) {
    int n=s.size(), m=t.size();

    int i=0, j=0, c=0;
    while (i<n && j<m) {
        if (s[i]==t[j]) {
            i++;
            j++;
            c++;
        }

        else {
            break;
        }
    }

    int ans;
    if (c==0) ans = m+n;
    else ans = m+n-c+1;

    cout << ans << '\n';

    return;
}

int main() {
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s >> t;

        solve(s, t);
    }

    return 0;
}
