#ifndef __ORDER_H
#define __ORDER_H

#include <iostream>
#include <list>
#include "product.H"

struct LineOrder {
   int _product;
   int _quantity;
   LineOrder() { _product = -1;_quantity  = 0;}
   LineOrder(int p,int q) : _product(p),_quantity(q) {}
   LineOrder(std::istream& is) {
      is >> _product >> _quantity;
   }
};

struct Order {
   std::list<LineOrder> _orders;
   std::string _name;
   Order(const std::string& fname);
   void makeInvoice(const ProductDB& pdb);
};
   
#endif
