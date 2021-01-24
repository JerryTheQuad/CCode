#include <iostream>

int calculate(int num_1, int num_2, char oper)
{
  switch (oper)
  {
    case '+':
      return num_1 + num_2;
    case '-':
      return num_1 - num_2;
    case '*':
      return num_1 * num_2;
    case '/':
      return num_1 / num_2;
    case '%':
      return num_1 % num_2;
  }
}

int main()
{
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
 
  std::cout << "Enter another integer: ";
  int y{};
  std::cin >> y;
 
  std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
  char op{};
  std::cin >> op;
 
  std::cout << x << ' ' << op << ' ' << y << " is " << calculate(x, y, op) << '\n';

  return 0;
}
