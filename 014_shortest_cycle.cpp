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
vector<bool> visit(100);
vector<int> dist(100);
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    dist[node] = 0;
    while (!q.empty())
    {
        int nd = q.front();
        for (auto e : adj[nd])
        {
            dist[e] += dist[nd] + 1;
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
        int v, e;
        cin >> v >> e;
        fe(i, 1, e)
        {
            int p, q;
            cin >> p >> q;
            adj[p].pu(q);
            adj[q].pu(p);
        }

        f(i, 1, v)
        {
            if (!visit[i])
            {
                bfs(i);
            }
        }
    }
    return 0;
}
