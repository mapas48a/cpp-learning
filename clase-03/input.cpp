#include <iostream>

// cout << (operador de insercion)
// cin >> (operador de extraccion)
// getline para obtener el otro valor del espacio. porque parece que se registra
// el campo como otra entrada ya. es un input ya siendo innecesario en cin >>

int main() {
  std::string nombre;
  int edad;

  std::cout << "Cual es tu edad? ";

  std::cin >> edad;

  std::cout << "Cual es tu nombre? ";
  // std::getline(std::cin,nombre);  // esto trae un error con los caracteres
  // especiales. ya que se queda registrado el buffer y lo toma como entrada.

  std::getline(std::cin >> std::ws, nombre);
  // std::cin >> nombre;  // para una sola linea

  std::cout << "Tu nombre es:" << nombre << std::endl;
  std::cout << "Tus años es:" << edad;
}