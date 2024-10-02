#include <bits/stdc++.h>
#define input(v) for(auto &i : v) cin >> i
#define endl "\n"
#define all(x)  x.begin(), x.end()

typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
using namespace std;

void solve() {
    char a[8][8], b[8][8];
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (a[i][j]=='.') continue;
            cout << a[i][j];
        }
    }
    cout << endl;
}
signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return (EXIT_SUCCESS);
}
