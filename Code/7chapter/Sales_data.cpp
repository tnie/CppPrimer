#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

double Sales_data::avg_price() const {
  if(units_sold)
    return revenue / units_sold;
  else
    return 0;
}

std::ostream &print(std::ostream& os, const Sales_data& item) {
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}
std::istream &read(std::istream& is, Sales_data& item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;
  return is;
}

Sales_data::Sales_data(std::istream& is) {
  read(is, *this);
}