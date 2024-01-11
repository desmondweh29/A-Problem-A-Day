#include <bits/stdc++.h>
using namespace std;

// Question: https://codeforces.com/problemset/problem/1584/C

void solve()
{
      int n;
      cin >> n;

      vector<int> a(n);
      vector<int> b(n);

      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
      }

      for (int i = 0; i < n; i++)
      {
         cin >> b[i];
      }

      sort(a.begin(), a.end());
      sort(b.begin(), b.end());

      for (int j = 0; j < n; j++)
      {
         int diff = b[j] - a[j];

         if (diff == 1 || diff == 0)
         {
            continue;
         }
         else
         {
            cout << "NO\n";
            return;
         }
      }
      cout << "YES\n";
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t;
   cin >> t;

   while (t--)
   {
      solve();
   }
   return 0;
}