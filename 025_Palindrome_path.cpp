/* Sandeep Code's Only */
#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define MP make_pair
#define f(i, m, n) for (int i = m; i < n; i++)

#define pii pair<int, int>
#define pll pair<ll, ll>

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

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

int palindrome(vector<int> v)
{
    int len = v.size() / 2;
    int ans = 0;
    for (int i = 0; i < len; i++)
        if (v[i] != v[v.size() - i - 1])
            ans++;
    return ans;
}

void getPalindrome(vector<int> ans, vector<vector<int>> v, int i, int j, int n, int m, int &va)
{

    if (i < n - 1 || j < m - 1)
    {
        if (i < n - 1)
        {

            ans.push_back(v[i][j]);
            getPalindrome(ans, v, i + 1, j, n, m, va);
        }
        if (j < m - 1)
        {

            ans.push_back(v[i][j]);
            getPalindrome(ans, v, i, j + 1, n, m, va);
        }
    }
    else
    {
        ans.push_back(v[n - 1][m - 1]);
        if (ans.size() == (n + m - 1))
        {
            int x = palindrome(ans);
            for (auto i : ans)
                cout << i;
            cout << "ans" << x << "\t";
            va = min(va, x);
        }
    }
}

int testcase(int t)
{
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        vector<int> ans;
        int va = INT_MAX;
        getPalindrome(ans, v, 0, 0, n, m, va);
        cout << va << "\n";
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
    cin >> t;
    testcase(t);
    return 0;
}