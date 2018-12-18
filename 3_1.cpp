#include <iostream>
#include <string>
//using namespace std;

int main ()
{
//insert code here
std::string name1 = " ";
std::string name2 = " ";
double number1;
double number2;

std::cout << "Enter name: " << std::endl ;
std::cin >> name1;

std::cout << "Enter age of " << name1 << std::endl ;
std::cin >> number1;

std::cout << "Enter name: " << std::endl ;
std::cin >> name2;

std::cout << "Enter age of " << name2 <<std::endl ;
std::cin >> number2;
std::cout << "============================="<< std::endl ;
if (number1 > number2){
  std::cout << name1 << " is older by " << number1 - number2 << " years!"<< std::endl ;
}
else if (number1 < number2){
  std::cout << name2 << " is older by " << number2 - number1 << " years!"<< std::endl ;
}
if (number1 > 100 & number2 > 100){
  std::cout<<"WOWZA!"<<std::endl;
}
std::cout << "============================="<< std::endl ;
return 0;

}
