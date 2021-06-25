#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int A,B;

  cin >> A >> B;


  int cnt = 0;
  int e,f,g,h,tmp;

  for (int i = A; i <= B; i++) {
    e = i / 10000; 
    tmp = i % 10000;

    f = tmp / 1000; 
    tmp = tmp % 1000;

    tmp = tmp % 100;

    g = tmp / 10; 
    tmp = tmp % 10;

    h = tmp;

    if (e == h && f == g)  {
      cnt++;
    }
  }

  cout << cnt << endl;

}
