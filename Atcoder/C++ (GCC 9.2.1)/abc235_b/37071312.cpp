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
const int mx = 1e5 + 123;
int a[mx];
int main()
{
    optimizer();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > a[i - 1])
        {
            ans = a[i];
        }
        else
            break;
    }
    cout << ans << endl;

    return 0;
}