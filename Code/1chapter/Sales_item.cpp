#include <iostream>
#include "Sales_item.h"

/* 计算书店的总销售额、售出册数和平均售价 */
int main() {
  Sales_item total;
  // 读入第一条数据
  if (std::cin >> total) {
    Sales_item trans;
    while(std::cin >> trans) {
      if(total.isbn() == trans.isbn()) {
        total += trans;
      }
      else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    //打印最后一本书
    std::cout << total << std::endl;
  }
  else {
    //警告“没有数据”
    std::cerr << "Please input data" << std::endl;
    return 1;
  }  
  return 0;
}