#include <iostream>

using string = std::string;
using std::cout;

int main() {
  double x = (int)3.14;  // se puede convertir tipos como as directamente (type)

  char v = 100;  // el char busca especificamente el indice ascii si se
  // escribe un numero!

  cout << v << '\n';
  cout << x << std::endl;

  // mini ejemplo.
  int Pcorrecta = 8;
  int Ptotal = 10;

  double puntaje = Pcorrecta / (double)Ptotal * 100;

  cout << puntaje << '%';

  return 0;
}