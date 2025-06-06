#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;

    map<string, int> player;
    vector<pair<string, int>> his;
    for (int i=0; i<m; i++) {
        string s;
        int n;
        cin >> s >> n;

        his.push_back({s, n});
        player[s] += n;
    }

    int maxS = -1;
    for (auto &p : player) {
        maxS = max(maxS, p.second);
    }

    map<string, int> track;
    for (auto &p : his) {
        string s = p.first;
        int n = p.second;

        track[s] += n;

        if (track[s]>=maxS && player[s]==maxS) {
            cout << s;
            return 0;
        }
    }

    return 0;
}
