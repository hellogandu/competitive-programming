#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    long long int ans = pow(2, n);
    n -= 1;
    int pos = n / 2;
    while (n > 0)
    {
      if (n > pos)
      {
        ans -= pow(2, n);
      }
      else
      {
        ans += pow(2, n);
      }
      n -= 1;
    }
    cout << ans << endl;
  }

  return 0;
}