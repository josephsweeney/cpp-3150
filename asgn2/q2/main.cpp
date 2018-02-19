#include "wList.H"
#include <string>
#include <list>
#include <iostream>

int main()
{
  using namespace std;
  auto words = buildList();
  for(auto w : *words) {
    cout << w << endl;
  }
  delete words;
  return 0;
}
