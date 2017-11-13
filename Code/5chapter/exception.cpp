#include <iostream>
#include <string>
#include <stdexcept>

int main() {
  int item1, item2;
  while (std::cin >> item1 >> item2) {
    try {
      if (item2 == 0)
        throw std::runtime_error("item2 can not be zero");
      int result;  
      result = item1 / item2;
      std::cout << result << std::endl;
    } catch (std::runtime_error err) {
      std::cout << err.what()
                << "\nTry Again? Enter y or n" << std::endl;
      char c;
      std::cin >> c;
      if(!std::cin || c == 'n')
        break; //跳出循环
    } 
  }  
  return 0;
}
