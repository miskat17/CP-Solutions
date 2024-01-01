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
    int n, m, k, sum = 0;
    cin >> n >> m >> k;
    for (int i = 1; i <= n - 1; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    int x = (n * k) - sum;
    if (x < 0)
        x = 0;
    if (x > m)
        x = -1;
    cout << x << endl;

    return 0;
}