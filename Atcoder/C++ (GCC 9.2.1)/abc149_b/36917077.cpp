#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define pf push_front
#define pi 2 * acos(0.0)
#define endl '\n'
#define pi 2 * acos(0.0)
#define mod 1000000007
#define optimizer()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
int main()
{
    optimizer();
    ll a, b, c, d, e, f, g;
    cin >> a >> b >> c;
    d = a - c;
    e = b - abs(d);
    f = max(0ll, d);
    g = max(0ll, e);
    if (f > 0)
        cout << d << " " << b << endl;
    else
        cout << f << " " << g << endl;

    return 0;
}