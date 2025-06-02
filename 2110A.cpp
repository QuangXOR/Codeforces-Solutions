#include<bits/stdc++.h>
using namespace std;

int t;

void solve(int n, int a[]) {
    sort(a, a+n);

    if (a[0]%2 == a[n-1]%2) {
        cout << 0 << '\n';
        return;
    }

    int l=n, r=n;
    for (int i=1; i<n; i++) {
        if (a[i]%2 == a[n-1]%2) {
            l=i;
            break;
        }
    }

    for (int i=n-2; i>=0; i--) {
        if (a[0]%2 == a[i]%2) {
            r=i;
            break;
        }
    }
    
    r = n-r-1;

    cout << min(l, r) << '\n';

    return;
}

int main() {
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n+1];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        solve(n, a);
    }

    return 0;
}
