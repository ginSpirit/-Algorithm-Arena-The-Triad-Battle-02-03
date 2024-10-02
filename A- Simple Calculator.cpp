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
    
    int x, y; cin >> x >> y;
    
    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " * " << y << " = " << (1LL*x*y) << endl;
    cout << x << " - " << y << " = " << x-y << endl;

    return (EXIT_SUCCESS);
}
