#include "wList.H"
#include <string>
#include <list>
#include <iostream>

// authors: jds13019 rdp12004

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
