#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data {
// 友元声明
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
public :
  // 构造函数
  Sales_data() = default;
  Sales_data(const std::string& s):bookNo(s) {};
  Sales_data(const std::string& s, unsigned n, double p):
             bookNo(s), units_sold(n), revenue(n*p) {};
  Sales_data(std::istream&);
  // 成员函数
  std::string isbn() const {return bookNo;} //const 的意义？ok
  Sales_data& combine(const Sales_data&); //& 的意义？ok
private:  
  double avg_price() const;
  // 成员变量
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

// 非成员函数
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
#endif
