#include <list>
#include <string>
#include <iostream>
#include "wList.H"

using namespace std;

void buildList(list<string> &words) {
  string x;
  while(cin >> x) {
    for(char c : x) {
      if(!isalpha(c)) throw string("Word has non-alphabetic char");
    }
    words.push_back(x);
  }
}
