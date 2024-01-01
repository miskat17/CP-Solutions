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
char s[mx];
int main()
{
    optimizer();
    int n, l;
    cin >> n >> l;
    cin >> s;
    for (int i = n - 1, j = l - 1; i < j; i++, j--)
    {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    int p = strlen(s);
    for (int i = 0; i < p; i++)
    {
        cout << s[i];
        }

    return 0;
}