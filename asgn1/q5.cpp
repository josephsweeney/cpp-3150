#include <iostream>
#include <vector>
using namespace std;

long get_input() {
    long num;
    std::cout << "Enter a number to factor: ";
    std::cin >> num;
    return num;
}

void print_factors(long num, vector<long> factors) {
    const char* f = factors.size() == 1 ? "factor" : "factors";
    cout << "The prime " << f << " of " << num;
    if(factors.size() == 1)  {
        cout << " is " << factors[0] << "." << endl;
    }
    else {
        cout << " are ";
        for(int i = 0; i < factors.size(); i++) {
            if(i == factors.size() - 1) {
                cout << "and " << factors[i] << "." << endl;
            }
            else {
                cout << factors[i] << ", ";
            }
        }
    }
}

int main()
{
    long num = get_input();
    long og = num;
    long curr = 2;
    vector<long> factors;

    while(num > 1) {
        if(num % curr == 0) {
            num /= curr;
            factors.push_back(curr);
        }
        else {
            curr++;
        }
    }

    print_factors(og, factors);

    return 0;
}
