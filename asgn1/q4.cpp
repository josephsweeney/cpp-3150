#include <iostream>
#include <stack>

long getInput() {
    long num;
    std::cout << "Give an integer to factor: ";
    std::cin >> num;
    return num;
}

int main()
{
    using namespace std;
    stack<long> factors;
    long num = getInput();
    long curr = 2;
    while(num > 1) {
        if(num % curr == 0) {
            num /= curr;
            factors.push(curr);
        }
        else {
            curr++;
        }
    }

    while(!factors.empty()) {
        cout << factors.top() << " ";
        factors.pop();
    }
    cout << endl;
    return 0;
}
