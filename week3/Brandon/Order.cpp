#include "Order.h"
#include <iostream>
#include <fstream>
#include <string>

Order readOrder(std::string filename) {
   std::ifstream file(filename);
   Order order;
   file >> order.customer;
   
   Purchase purchase;
   while (file >> purchase.wineId >> purchase.quantity) {
      order.purchases.push_back(purchase);
   }
   return order;
}

void printOrder(const Order& order)
{
   std::cout << order.customer << std::endl;
   for(const Purchase& p : order.purchases) 
      std::cout << p.wineId << ' ' << p.quantity << std::endl;
   std::cout << std::endl;
}
