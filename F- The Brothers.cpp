#include <bits/stdc++.h>
#define input(v) for(auto &i : v) cin >> i
#define endl "\n"
#define all(x)  x.begin(), x.end()

typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
using namespace std;

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    string a, x, b, y;
    cin >> a >> x >> b >> y;

    cout << (x==y? "ARE Brothers" : "NOT") << endl;
    
    return (EXIT_SUCCESS);
}
