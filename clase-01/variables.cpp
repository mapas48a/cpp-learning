#include <iostream>

int main()
{
  /*
  int x; // Declaracion;
  x = 5; // Asignacion;
  */

  // Entero:
  int x = 30;
  int y = 4;
  int edad = 24;
  int año = 2024;
  int dias = 24.40;

  // Decimales:
  double precio = 20.333333333333333340; // este es 64bits almacena 15 digitos.
  float entonces = 30.2030303;           // este solamente almance 32bits osea 7 digitos.

  // CHAR:
  char calificacion = 'A';
  char inicial = 'B';

  // BOOLEANOS:
  bool estudiantes = false;

  // STRING:
  std::string nombre = "Jonathan el mejor";

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << dias << '\n';

  std::cout << "DOUBLES O FLOTANTES" << std::endl;

  std::cout << precio;

  std::cout << "CHARS" << std::endl;
  std::cout << calificacion;
  std::cout << inicial << std::endl;

  std::cout << "BOOLEANOS" << std::endl;
  std::cout << estudiantes << '\n';

  std::cout << "STRING" << std::endl;
  std::cout << "WOW " << nombre;
  return 0;
}