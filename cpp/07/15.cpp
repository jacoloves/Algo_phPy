#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int max_num1 = max(a, b);
  int max_fin = max(max_num1, c);

  int min_num1 = min(a, b);
  int min_fin = min(min_num1, c);

  cout << max_fin - min_fin << endl;

}

