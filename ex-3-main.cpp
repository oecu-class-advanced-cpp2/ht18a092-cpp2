#include <string>
#include <sstream>
#include <iostream>

int main(){

  std::stringstream ss;

  int value_ = 2000;
  int q = value_/1000;
  if (q == 1){
     ss << 'm';
  }
  if (q > 1){
     ss << q;
     ss << 'm';
  }  
  
  std::cout << ss.str() << std::endl;
}