#include "Inventory.h"
#include "Order.h"

int main() {
   auto inventory = readInventory("products.txt");
   printInventory(inventory);
   
   auto order = readOrder("order.txt");
   printOrder(order);

   return 2;
}
