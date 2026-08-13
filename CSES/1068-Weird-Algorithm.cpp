#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    cin >> n;
    while (n != 1)
    {
        cout << n << ' ';
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
          n *= 3 ;
            n+=1;
        }
    }
    cout << 1 << endl;
}
 
// ---------- Main ----------
int main()
{
 
    int t = 1;
    // cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}
