#include <iostream>
#include "Sales_data.h"

int main() {
  
  Sales_data data1, data2;
  double price;
  // 读入第1笔交易
  std::cin >> data1.bookNo >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;
  // 读入第2笔交易
  std::cin >> data2.bookNo >> data2.units_sold >> price;
  data2.revenue = data2.units_sold * price;
  // 如果data的ISBN相同，求两者的总和
  if (data1.bookNo == data2.bookNo) {
    unsigned totalCnt = data1.units_sold + data2.units_sold;
    double totalRevenue = data1.revenue + data2.revenue; 
    std::cout << data1.bookNo << " " << (totalCnt)
              << " " << (totalRevenue) << " ";
    if(totalCnt == 0) {
      std::cout << "(no sales)" << std::endl;
    }
    else {
      std::cout << (totalRevenue/totalCnt) << std::endl;
    }
    return 0; //标示成功
  }
  else {
    //ISBN不同
    std::cerr << "Data must refer to the same ISBN" << std::endl;
    return -1; //标示失败
  }
}