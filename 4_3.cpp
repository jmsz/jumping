#include <iostream>
#include <string>
//using namespace std;

int main ()
{
//insert code here
std::string order;
int i = 1;
double number = 0;
double sum = 0;
while (i > 0){
    std::cout<< "add number: "<<std::endl;
    std::cin>> number;
    sum = sum + number;
    std::cout<< "total: "<< sum << std::endl;
    if (number == 0){
        i = 0;
  }
}
return 0;
}
