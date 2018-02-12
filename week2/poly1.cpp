#include <iostream>
#include <vector>
using namespace std;

typedef struct mono {
    double coeff;
    int exp;
} Mono;

typedef struct poly {
    vector<mono*> monos;
} Poly;


void addMono(Poly *p, double coeff, int exp) {
    Mono* m = new Mono;
    m->coeff = coeff;
    m->exp = exp;
    p->monos.push_back(m);
}

void printPoly(Poly *p) {
    cout << p->monos.size() << " ";
    for(Mono *m : p->monos) {
        cout << m->coeff << " " << m->exp << " ";
    }
    cout << endl;
}

Poly addPolys(Poly p1, Poly p2) {
    Poly res; 
    

int main()
{
    Poly p;
    addMono(&p, 3.5, 2);
    printPoly(&p);
   return 0;
}
