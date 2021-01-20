#include <iostream>
 
int getNumFromUser()
{
  std::cout << "Input a number from 0 to 255: ";
  int num {};
  std::cin >> num;

  return num;
}

int oneBit(int num, int power)
{
  std::cout << '1';
  return num -= power;
}

int calculate(int num, int power)
{
  if (num >= power)
    return oneBit(num, power);
  
  std::cout << '0';

  return num;
}

int main()
{
    int num { getNumFromUser() };

    num = calculate(num, 128);
    num = calculate(num, 64);
    num = calculate(num, 32);
    num = calculate(num, 16);
    std::cout << ' ';
    num = calculate(num, 8);
    num = calculate(num, 4);
    num = calculate(num, 2);
    num = calculate(num, 1);


    return 0;
}