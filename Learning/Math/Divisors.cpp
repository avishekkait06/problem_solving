#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin >> n;
    set<int> a;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a.insert(i);
            if (n / i != i)
            {
                a.insert(n / i);
            }
        }
    }

    for (auto &it : a)
    {
        cout << it << " ";
    }
    return 0;
}
