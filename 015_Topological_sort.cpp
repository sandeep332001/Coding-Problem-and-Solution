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

vector<int> adj[100];
vector<int> visit(100, 0);
deque<int> ans;
void dfs(int node)
{
    visit[node]++;
    for (auto e : adj[node])
    {
        if (!visit[e])
        {
            dfs(e);
        }
    }
    ans.push_front(node);
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
        int v, e;
        cin >> v >> e;
        int p, q;
        for (int i = 1; i <= e; i++)
        {
            cin >> p >> q;
            adj[p].push_back(q);
        }

        for (int i = 0; i < v; i++)
        {
            if (!visit[i])
            {
                dfs(i);
            }
        }
        for (auto e : ans)
        {
            cout << e << " ";
        }
    }
    return 0;
}
