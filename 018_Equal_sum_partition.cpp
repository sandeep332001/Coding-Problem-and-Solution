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

int ans = 0;

int knapsack(vector<int> v, int sum, int n)
{
    if (sum == 0)
    {
        return true;
    }
    else if (n == 0)
    {
        return false;
    }

    if (v[n - 1] <= sum)
    {
        return (knapsack(v, sum - v[n - 1], n - 1) || knapsack(v, sum, n - 1));
    }
    return knapsack(v, sum, n - 1);
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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        cout << sum;

        if (sum & 1)
        {
            cout << false;
        }
        else
        {
            cout << knapsack(v, sum / 2, n);
        }
    }
    return 0;
}
