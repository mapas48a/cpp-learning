#include <iostream>
#include <vector>

// esto es como una deficion gracias a Dios!
// typedef std::vector<std::pair<std::string, int>> pair_list_t;
// typedef std::string text_t;
// typedef int numero_t;
using text_t = std::string;
using numero_t =
    int;  // es para dar un alias a un tipo para dar mas facilidad a leerlo :D
          // no es para todo claros. solo para los dificiles y largos.

int main() {
  text_t nombre = "Alex";
  using std::cout;

  int edad = 24;
  numero_t edad_definiada = 40;
  cout << nombre << '\n' << edad_definiada;

  return 0;
}