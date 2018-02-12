#include <iostream>

// authors: jds13019 rdp12004

long getInput() {
    long num;
    std::cout << "Give an integer to factor: ";
    std::cin >> num;
    return num;
}

void findFactors(long num) {
    long start = 2;
    long curr = start;

    while(num > 1) {
       if(num % curr == 0) {
           num /= curr;
           std::cout << curr << " ";
       }
       else {
           curr += 1;
       }
    }
    std::cout << "\n";
}

int main()
{
    long num = getInput();
    findFactors(num);
    return 0;
}
