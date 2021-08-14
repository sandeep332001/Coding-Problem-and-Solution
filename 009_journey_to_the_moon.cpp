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

vector<int> adj[100000];
vector<bool> visit(100000);
vector<ll> pairs(100000, 1);

void dfs(int node, int starting_node)
{
    visit[node] = true;
    for (auto e : adj[node])
    {
        if (!visit[e])
        {
            visit[e] = true;
            pairs[starting_node] += 1;
            dfs(e, starting_node);
        }
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
        int n, p;

        cin >> n >> p;
        vector<bool> input(p);
        f(i, 0, p)
        {
            int a, b;
            cin >> a >> b;
            input[a] = true;
            input[b] = true;
            adj[a].pu(b);
            adj[b].pu(a);
        }
        // f(i, 0, n)
        // {
        //     cout << input[i];
        // }
        f(i, 0, n) if (!input[i])
        {
            adj[i].pu(i);
        }

        // for (auto i : adj)
        // {
        //     for (auto j : i)
        //         cout << j << " ";
        //     cout << "\n";
        // }

        ll ans = 0;
        f(j, 0, n)
        {
            if (!visit[j])
            {
                visit[j] = true;
                dfs(j, j);
                ans++;
            }
            else
            {
                pairs[j] = 0;
            }
        }
        f(i, 0, n)
        {
            cout << pairs[i] << " ";
        }
        cout << ans;
    }
    return 0;
}
