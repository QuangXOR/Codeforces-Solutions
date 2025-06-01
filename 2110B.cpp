#include<bits/stdc++.h>
using namespace std;

int t;

void solve (string s) {
    int cur=0;
    for (int i=1; i<s.size()-2; i++) {
        if (s[i]=='(') cur++;
        else cur--;

        if (cur < 0) {
            cout << "YES" << '\n';
            return;
        }
    }

    cout << "NO" << '\n';
    return;
}

int main() {
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        solve(s);
    }

    return 0;
}
