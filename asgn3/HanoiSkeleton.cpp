#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

template <class T> 
const T& max(const T (&a)[]) {
   T result = *a.begin();
   for (auto it = a.begin(); it != a.end(); it++)
      if (*it > result)
         result = *it;
   return result;
}

struct peg {
   stack<int> discs;
   char name;
};

void towerOfHanoiPegs(int height) {
   peg a, b, c;
   a.name = 'a';
   b.name = 'b';
   c.name = 'c';
   for (int i = height; i > 0; i--)
      a.discs.push(i);
   
   printTowerOfHanoi(a, b, c);
   tower(a, b, c, height);
}

int main () {
   cout << "4 disc tower of Hanoi" << endl << endl;
   towerOfHanoiPegs(4);
   // cout << endl << endl << endl << "10 disc tower of Hanoi" << endl << endl;
   // towerOfHanoiPegs(10);
   // cout << endl << endl << endl << "15 disc tower of Hanoi" << endl << endl;
   // towerOfHanoiPegs(15);
}
