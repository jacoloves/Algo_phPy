#include <iostream> // cout, endl, cin

using namespace std;
typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;

    int area = a * b;
    int cir_length = a * 2 + b * 2;

    cout << area << " " << cir_length << endl;

    return 0;
}
