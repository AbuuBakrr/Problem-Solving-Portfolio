#include <iostream>
#include <vector>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void IO()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
}

int main()
{
    fastIO();
    // IO();

    long long n;
    cin >> n;

    vector<long long> v(1000000, 0);

    long long maxb = -1;
    for (long long i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        v[a - 1] += 1;
        v[b] -= 1;
        maxb = max(maxb, b);
    }

    for (long long i = 1; i < maxb + 1; i++)
    {
        v[i] += v[i - 1];
    }

    long long maxi = -1;

    for (long long i = 0; i < maxb + 1; i++)
    {
        maxi = max(maxi, v[i]);
    }

    cout << maxi;
    return 0;
}
