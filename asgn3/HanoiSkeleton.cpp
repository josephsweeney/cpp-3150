#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

struct peg {
  stack<int> discs;
  char name;
  int size() { return discs.size(); };
  int pop() {
    int res = discs.top();
    discs.pop();
    return res;
  };
  void push(int val) { discs.push(val); };
};

struct Towers {
  peg a, b, c;
  void printTowerOfHanoi();
  void tower(peg &, peg&, peg&, int);
  Towers(int height) {
    a.name = 'a';
    b.name = 'b';
    c.name = 'c';
    for (int i = height; i > 0; i--)
      a.push(i);
  }
};

void Towers::printTowerOfHanoi() {
  int curr_line = max(max(a.size(), b.size()), c.size());
  peg pegs[3] = {a, b, c};
  
  for(curr_line; curr_line > 0; curr_line--) {
    cout << "\t";
    for(int i = 0; i<3; i++) {
      if(curr_line == pegs[i].size()) 
	cout << pegs[i].pop();
      cout << "\t";
    }
    cout << endl;
  }
  
  cout << "\t_\t_\t_" << endl;
  cout << "\t" << a.name << "\t" << b.name << "\t" << c.name << endl;
  cout << "-------------------------------------" << endl;
};

void Towers::tower(peg &source, peg &dest, peg &aux, int height) {
  if(height > 0) {
    tower(source, aux, dest, height-1);
    
    cout << endl << "Move disc from peg " << source.name << " to " << dest.name << endl << endl;
    dest.push(source.pop());
    printTowerOfHanoi();
    
    tower(aux, dest, source, height-1);
  }
};

void towerOfHanoiPegs(int height) {
  Towers t(height);
  t.printTowerOfHanoi();
  t.tower(t.a, t.c, t.b, height);
}

int main () {
   cout << "4 disc tower of Hanoi" << endl << endl;
   towerOfHanoiPegs(4);
   cout << endl << endl << endl << "10 disc tower of Hanoi" << endl << endl;
   towerOfHanoiPegs(10);
   cout << endl << endl << endl << "15 disc tower of Hanoi" << endl << endl;
   towerOfHanoiPegs(15);
}
