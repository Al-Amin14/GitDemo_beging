#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a = {0, 1, 0, 2, 0, 2, 1, 2};
  int i = 0, j = 0, k = a.size() - 1;
  while (j <= k)
  {
    if (a[j] == 1)
    {
      j++;
    }
    else if (a[j] == 0)
    {
      swap(a[i++], a[j++]);
    }
    else if (a[k] == 2)
    {
      k--;
    }
    else
    {
      swap(a[k--], a[j]);
    }
  }
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << endl;
  }
  return 0;
}