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

bool knapsack(vector<int> v, int n, int sum)
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

        return ((knapsack(v, n - 1, sum - v[n - 1])) || knapsack(v, n - 1, sum));
    }
    else
    {
        return knapsack(v, n - 1, sum);
    }
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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum;
        cin >> sum;
        cout << knapsack(v, n, sum);
    }
    return 0;
}
