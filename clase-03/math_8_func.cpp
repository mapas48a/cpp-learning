#include <cmath>
#include <iostream>

using std::cout;

int main() {
  double x;
  double y;
  double z;

  cout << "Ingresa el valor de X:";
  std::cin >> x;

  cout << "Ingresa el valor de Y:";
  std::cin >> y;

  // primera funcion mathematicas max.
  z = std::max(x, y);

  cout << "El valor mas grande es: " << z << '\n';

  // primera funcion mathematicas min.
  z = std::min(x, y);

  cout << "El valor mas pequeño es: " << z << '\n';

  // segunda funcion mathematicas se necesita incluir o importar como js cmath
  // la std de mathematicas
  z = std::pow(x, y);  // pow eleva un numero tras un exponente dado.

  cout << "El valor elevado es: " << y << '\n'
       << "La base es: " << x << '\n'
       << "El resultado es: " << z;

  return 0;
}