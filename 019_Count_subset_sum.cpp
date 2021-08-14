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

vector<vector<int>> dp(10, vector<int>(20, 0));

int knapsack(vector<int> v, int sum, int n)
{
    if (sum == 0)
        return 1;
    else if (n == 0)
    {
        return 0;
    }
    if (dp[n][sum])
    {
        return dp[n][sum];
    }

    if (v[n - 1] <= sum)
        return dp[n][sum] = knapsack(v, sum - v[n - 1], n - 1) + knapsack(v, sum, n - 1);
    return dp[n][sum] = knapsack(v, sum, n - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        f(i, 0, n) cin >> v[i];
        int sum;
        cin >> sum;
        fe(i, 0, n) dp[i][0] = 1;
        fe(i, 1, sum) dp[0][i] = 0;

        cout << knapsack(v, sum, n) << "\n";
        fe(i, 0, n)
        {
            fe(j, 0, sum)
            {
                cout << dp[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
