#ifndef __INVENTORY_H
#define __INVENTORY_H

#include <map>
#include <string>
#include "Wine.h"

typedef std::map<unsigned int, Wine> Inventory;
Inventory readInventory(std::string);
void printInventory(const Inventory&);

#endif
