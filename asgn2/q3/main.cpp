#include "wList.H"
#include <string>
#include <list>
#include <iostream>

int main()
{
  using namespace std;
  list<string> words;
  buildList(words);
  for(auto w : words) {
    cout << w << endl;
  }
  return 0;
}
