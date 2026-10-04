#include <iostream>

namespace primero {
int x = 1;
}  // namespace primero

namespace segundo {
int x = 2;
int m = 2;
}  // namespace segundo

int main() {
  std::cout << "hola";

  using namespace primero;  // ya se utiliza el namespace primero, no es
  // necesario ponerlo en cada variable.

  using std::cout;
  using std::string;

  using namespace std;

  string nombre = "hola";
  cout << "X = " << x << '\n';

  int x = 0;

  cout << x;

  return 0;
}