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

vector<int> primeFactors(int n, vector<int> p)
{
    while (n % 2 == 0)
    {
        p.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            p.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        p.push_back(n);

    return p;
}

int testcase(int t)
{
    vector<int> ans1;
    vector<int> ans2;
    int n;
    while (t--)
    {
        cin >> n;
        if (n <= 5)
        {
            ans1.push_back(-1);
            ans2.push_back(-1);
        }
        else
        {
            vector<int> p;
            p = primeFactors(n, p);

            if (p.size() > 1 && p[0] != p[p.size() - 1])
            {
                ans1.push_back(p[0]);
                ans2.push_back(p[p.size() - 1]);
            }
            else
            {
                ans1.push_back(-1);
                ans2.push_back(-1);
            }
        }
    }
    for (auto x : ans1)
        cout << x << " ";
    cout << "\n";
    for (auto x : ans2)
        cout << x << " ";
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