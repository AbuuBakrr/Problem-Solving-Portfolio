#include <iostream>
using namespace std;

int main()
{
    int n{}, l{}, q{}, k{};
    cin >> n;

    int *arr = new int[n + 1];
    arr[0] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        cin >> l;
        arr[i] = arr[i - 1] + l;
    }

    cin >> q;
    int **Qarr = new int *[q];

    for (int j = 0; j < q; j++)
    {
        Qarr[j] = new int[2];
        cin >> k;
        Qarr[j][0] = k;
        cin >> k;
        Qarr[j][1] = k;
    }

    for (int m = 0; m < q; m++)
    {
        if (m > 0)
            cout << endl;

        cout << arr[Qarr[m][1]] - arr[Qarr[m][0] - 1];
    }

    return 0;
}
