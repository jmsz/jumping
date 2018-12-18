#include <iostream>
#include <string>
//using namespace std;

int main ()
{
//insert code here
double number1;
double number2;
char operation;

std::cout << "first number" << std::endl ;
std::cin >> number1;

std::cout << "second number " << std::endl ;
std::cin >> number2;

std::cout << "operation " << std::endl ;
std::cin >> operation;

if (operation == '+'){
  std::cout << number1 << " " << operation<< " " << number2 << " = " << number1+number2 << std::endl ;
}
else if (operation == '-'){
  std::cout << number1 << " " << operation<< " " << number2 << " = " << number1-number2 << std::endl ;
}
else if (operation == '*'){
  std::cout << number1 << " x " << number2 << " = " << number1*number2 << std::endl ;
}
else if (operation == '/'){
  std::cout << number1 << " " << operation<< " " << number2 << " = " << number1/number2 << std::endl ;
}
return 0;

}
