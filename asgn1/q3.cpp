#include <iostream>
#include <vector>

long getInput() {
    long num;
    std::cout << "Give an integer to factor: ";
    std::cin >> num;
    return num;
}

int main()
{
    long num = getInput();
    std::vector<long> factors;
    long curr = 2;
    while(num > 1) {
        if(num % curr == 0) {
            num /= curr;
            factors.push_back(curr);
        }
        else {
            curr++;
        }
    }

    for(long n: factors) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}
