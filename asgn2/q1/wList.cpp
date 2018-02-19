#include <list>
#include <string>
#include <iostream>
#include "wList.H"

using namespace std;

void buildList(list<string> &words) {
  string x;
  while(cin >> x) {
    words.push_back(x);
  }
}
