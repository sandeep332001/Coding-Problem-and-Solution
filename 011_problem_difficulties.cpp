/* Sandeep Code's Only */
#include <bits/stdc++.h>
using namespace std;

#define f(i, m, n) for (int i = m; i < n; i++)
#define fe(i, m, n) for (int i = m; i <= n; i++)
typedef long long ll;

#define endl "\n"
#define pu push_back
#define pp pop_back

#define FAST                                                   \
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0); \
    srand(time(NULL));
#define MOD 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        vector<int> v(4);
        cin >> v[0] >> v[1] >> v[2] >> v[3];
        sort(v.begin(), v.end());
        f(i, 0, 3)
        {
            if (v[i] != v[i + 1])
            {
                ans++;
            }
        }
        ans == 3 ? cout << "2\n" : cout << ans << "\n";
    }
    return 0;
}
