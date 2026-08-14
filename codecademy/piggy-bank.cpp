#include <iostream>

int main() {

  double Pesos;
  double Reais;
  double Soles;
  double Dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> Pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> Reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> Soles;

// Pesos conversion rate: 0.00032
// Reais conversion rate: 0.27
// Soles conversion rate: 0.3

  Dollars = 0.00032 * Pesos + 0.27 * Reais + 0.3 * Soles;
  std::cout << "Total USD = $" << Dollars << "\n";

}
