/* Sandeep Code's Only */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define F first
#define S second
#define MP make_pair
#define f(i, m, n) for (ll i = m; i < n; i++)

#define pii pair<int, int>
#define pll pair<ll, ll>

#define endl "\n"
#define pu push_back
#define pp pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define FAST                                                   \
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0); \
    srand(time(NULL));
#define MOD 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN

vector<ll> adj[200001];
bool visit[200001];
void dfs(ll node)
{

}

int testcase(int t)
{
    while (t--)
    {
        ll n, x;
        cin >> n;
        vector<ll> vec(n + 1);
        f(i, 2, n + 1)
        {
            cin >> x;
            adj[x].pu(i);
            adj[i].pu(x);
        }
        dfs(1);
    }
    return 0;
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
    testcase(t);
    return 0;
}