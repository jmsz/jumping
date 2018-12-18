#include <iostream>
#include <string>
//using namespace std;

int main ()
{
//insert code here
std::string order;
int i = 5;
while (i > 0){
  std::cout<< "fish"<< std::endl;
  std::cout<< "tofu"<< std::endl;
  std::cout<<"what will you be having tonight?"<<std::endl;
  std::cin>> order;
  if (order == "fish" | order == "tofu"){
    std::cout<< "thank you for your order of " << order << std:: endl;
    i = 0;
  }
  else{
    i = i-1;
  }
}
return 0;
}
