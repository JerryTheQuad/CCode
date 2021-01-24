#include <iostream>

int getIntFromUser()
{
  int num {};

  std::cout << "Please enter a number: ";
  std::cin >> num;

  return num;
}

int getAnotherIntFromUser()
{
  int num {};

  std::cout << "Please enter another number: ";
  std::cin >> num;

  return num;
}

char getCharFromUser()
{
  std::cout << "Please enter an operator: ";
  char oper {};
  std::cin >> oper;

  return oper;
}

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
  int num_1 {getIntFromUser()};
  int num_2 {getAnotherIntFromUser()};
  char oper {getCharFromUser()};

  std::cout << "The result is: " << calculate(num_1, num_2, oper);

  return 0;
}
