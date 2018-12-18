#include <iostream>
#include <string>
using namespace std;

int main ()
{
//insert code here
double number1;
double number2;
int attempt = 0;
std::string username = " ";

attempt = 0;
bool namecheck = 0;
bool passcheck = 0;

int i = 0;
while(i <10){
  std::cout<<i<<std::endl;
  i++;
}

while (attempt <4){
std::cout << "Enter username: " << std::endl ;
std::cin >> username;

if ((username == "me") or (username = "you")){
  namecheck = 1;}

else{
  namecheck = 0;}

if (namecheck == 1){
  std::cout << "Enter password (either 3 (me) or 7 (you) is correct): " << std::endl ;
  std::cin >> number1;
  if ((username == "me" &&  number1 ==3) or (username == "you" &&  number1 ==7) ){
    passcheck = 1;
}}

if (namecheck ==1 & passcheck ==1){
  std::cout << "HOORAY! You have logged in"<< std::endl ;
  return 0;
}
else{
  std::cout << "Incorrect username/password"<< std::endl ;
  attempt++;
}

}
}
