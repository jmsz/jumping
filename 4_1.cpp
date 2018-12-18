#include <iostream>
#include <string>
//using namespace std;

int main ()
{
//insert code here
int i = 99;
while (i > 0){
  std::cout<< i << "bottles of beer on the wall, " << i <<" bottles of beer. Take one down, pass it around"<< i -1 << " bottles of beer on the wall"<< std::endl;
  i= i-1;
}
return 0;
}
