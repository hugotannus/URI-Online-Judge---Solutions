#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << "Valores " << (( b>c && d>a && c+d>a+b && d>=0 && c>=0 && !(a&1) )?"":"nao ") << "aceitos\n";

  return 0;
}
