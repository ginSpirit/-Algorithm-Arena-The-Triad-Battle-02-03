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
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b>=10 || b+c>=10 || c+a>=10) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return (EXIT_SUCCESS);
}
