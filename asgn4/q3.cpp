#include <iostream>
#include <iomanip>

/*
 * Your task is to implement makeSineToOrder(k)
 * This is templated by the type of values used in the calculation.
 * It must yield a function that takes a value of the specified type and
 * returns the sine of that value (in the specified type again)
 */


int main()

{
   using namespace std;
   long double pi = 3.14159265358979323846264338327950288419716939937510L;
   for(int order = 1;order < 20; order++) {
      auto sine = makeSineToOrder<long double>(order);      
      cout << "order(" << order << ") -> sine(pi) = " << setprecision(15) << sine(pi) << endl;
   }
   return 0;
}
