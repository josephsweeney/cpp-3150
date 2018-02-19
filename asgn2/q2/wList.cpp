#include <list>
#include <string>
#include <iostream>
#include "wList.H"

using namespace std;

list<string> *buildList() {
  auto *words = new list<string>;
  string x;
  while(cin >> x) {
    (*words).push_back(x);
  }
  return words;
}
