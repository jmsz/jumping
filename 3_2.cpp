#include <iostream>
#include <string>
//using namespace std;

int main ()
{
//insert code here
double number1;
double number2;

std::cout << "Enter password (either 3 or 7 is correct): " << std::endl ;
std::cin >> number1;

if (number1 == 3 | number1 ==7){
  std::cout << "HOORAY! You have logged in"<< std::endl ;
}
else{
  std::cout << "Incorrect password"<< std::endl ;
}
return 0;

}
