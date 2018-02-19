#ifndef __ORDER_H
#define __ORDER_H

#include <vector>
#include <string>

struct Purchase {
   unsigned int wineId;
   unsigned int quantity;
};

struct Order {
   std::string customer;
   std::vector<Purchase> purchases;
};

Order readOrder(std::string);
void printOrder(const Order&);
#endif
