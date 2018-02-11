#include <iostream>

long getInput() {
    long num;
    std::cout << "Give an integer to factor: ";
    std::cin >> num;
    return num;
}

int main()
{
    long num = getInput();
    long factors[64];
    int i = 0;
    int curr = 2;
    while(num > 1) {
        if(num % curr == 0) {
            factors[i++] = curr;
            num /= curr;
        }
        else {
            curr += 1;
        }
    }
    for(int j = 0; j<i; j++) {
        std::cout << factors[j] << " ";
    }
    std::cout << std::endl;
    return 0;
}
