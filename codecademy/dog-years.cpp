#include <iostream>

int main() {
  
  int dog_age = 3; // my dog, Sparkles, is 3 years old
  int early_years;
  int later_years;
  int human_years;

  early_years = 21; // the first two years of Sparkles
  later_years = (dog_age - 2) * 4; // the following years
  human_years = early_years + later_years; // Sparkles' age in human years

  std::cout << "My name is Sparkles! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}
