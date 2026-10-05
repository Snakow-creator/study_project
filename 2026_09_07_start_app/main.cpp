#include <iostream>
#include <string>

int main() {
  std::cout << "Напиши приветствие:" << std::endl;
  std:: string text;
  std::getline(std::cin, text);
  std::cout << text << std::endl;

  return 0;
}
