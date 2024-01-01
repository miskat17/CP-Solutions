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
const int mx = 1e7 + 123;
int cnt[mx];
int main()
{
    optimizer();
    int lim = 1e7;
    for (int i = 1; i <= lim; i++)
    {
        for (int j = i; j <= lim; j += i)
        {
            cnt[j]++;
        }
    }
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (1LL * i * cnt[i]);
    }
    cout << ans << endl;
}