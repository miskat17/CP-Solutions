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
const int mx = 1e6 + 123;
int a[mx];
int cnt[mx];
int main()
{
    optimizer();
    int n, m;
    cin >> n;
    m = (4 * n) - 1;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cnt[a[i]]++;
    }

    for (int i = 0; i <= n; i++)
    {
        if (cnt[i] == 3)
        {
            cout << i << endl;
        }
    }

    return 0;
}