#include <iostream>
#include <string>
//using namespace std;

int main ()
{
//insert code here
double number1;
double number2;

std::string username = " ";

std::cout << "Enter username: " << std::endl ;
std::cin >> username;

if (username == "me"){
  std::cout << "Enter password (either 3 or 7 is correct): " << std::endl ;
  std::cin >> number1;

  if (number1 == 3 | number1 ==7){
    std::cout << "HOORAY! You have logged in"<< std::endl ;
    return 0
  }
  else{
    std::cout << "Incorrect password"<< std::endl ;
    return 0;
  }
}
else{std::cout << "Wrong username!"<<std::endl;}

if (username == "you"){
  std::cout << "Enter password (2 is correct): " << std::endl ;
  std::cin >> number1;

  if (number1 == 2){
    std::cout << "HOORAY! You have logged in"<< std::endl ;
    return 0;
  }
  else{
    std::cout << "Incorrect password"<< std::endl ;
    return 0;
  }
}
else{std::cout << "Wrong username!"<<std::endl;}
return 0;

}
