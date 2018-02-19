#include "Inventory.h"
#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include "Wine.h"

Inventory readInventory(std::string filename) {
   std::ifstream file(filename);
   Inventory inventory;
   Wine wine;
   while (file >> wine.id >> wine.price >> wine.name) {
      inventory[wine.id] = wine;
   }
   return inventory;
}

void printInventory(const Inventory& inventory) {
   for (auto p : inventory) {
      std::cout << p.second.id << '\t'
                << p.second.price << '\t'
                << p.second.name << std::endl;
   }
}
