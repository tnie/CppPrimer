#include <iostream>
#include "printvec.h"

int printvec(const std::vector<int>& intv, const int i) {
  if(intv.size() == i)
    return 0;
  std::cout << intv[i] << std::endl;
  printvec(intv, i+1);    
}
