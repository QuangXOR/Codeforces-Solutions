#include<bits/stdc++.h>
using namespace std;

int t;

void solve() {
    string s;
    cin >> s;

    int n=s.size();
    if (n<=10) cout << s << '\n';
    
    else {
        cout << s[0] << n-2 << s[n-1] << '\n';
    }

    return;
}

int main() {
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
