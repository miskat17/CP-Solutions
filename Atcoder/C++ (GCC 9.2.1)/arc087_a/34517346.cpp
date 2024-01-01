#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
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
    int n;
    cin >> n;
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cnt[a]++;
    }
    int ans = 0;
    for (auto u : cnt)
    {
        if (u.second >= u.first)
            ans += (u.second - u.first);
        else
            ans += u.second;
    }

    cout << ans << endl;
}