#include <iostream>
#include <vector>
#include <math.h>
#include <climits>

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void IO()
{
    freopen(" ../input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
}

int main()
{
    fastIO();
    IO();

    long long rows, cols, x, y;
    cin >> rows >> cols >> x >> y;

    vector<vector<long long>> v(rows + 1, vector<long long>(cols + 1, 0));

    for (long long i = 1; i <= rows; i++)
    {
        for (long long j = 1; j <= cols; j++)
        {
            cin >> v[i][j];
        }
    }

    for (long long i = 1; i <= rows; i++)
    {
        for (long long j = 1; j <= cols; j++)
        {
            v[i][j] += v[i][j - 1];
        }
    }

    for (long long j = 1; j <= cols; j++)
    {
        for (long long i = 1; i <= rows; i++)
        {
            v[i][j] += v[i - 1][j];
        }
    }

    long long maxBox = LLONG_MIN;

    for (long long d = x; d <= rows; ++d)
    {
        for (long long r = y; r <= cols; ++r)
        {
            long long u = d - x, l = r - y;
            long long currentBox = v[d][r] - v[u][r] - v[d][l] + v[u][l];
            maxBox = max(maxBox, currentBox);
        }
    }

    cout << maxBox;
    return 0;
}
