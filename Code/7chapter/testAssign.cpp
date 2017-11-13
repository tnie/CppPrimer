#include <iostream>
#include "Sales_data.h"

/* 计算书店的总销售额、售出册数和平均售价 */
int main() {
  Sales_data total;
  // 读入第一条数据
  if (read(std::cin, total)) {
    Sales_data trans;
    while(read(std::cin, trans)) {
      if(total.isbn() == trans.isbn()) {
        total.combine(trans);
      }
      else {
        print(std::cout, total) << std::endl;
        total = trans;
      }
    }
    //打印最后一本书
    print(std::cout, total) << std::endl;
  }
  else {
    //警告“没有数据”
    std::cerr << "Please input data" << std::endl;
    return 1;
  }  
  return 0;
}