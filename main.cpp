//
// Created by mendel bellaiche on 24/01/2023.
//

#include <iostream>
#include <format>

using namespace std;

auto addNumbers(int nb1, int nb2) {
    cout << "Entering function " << __func__ << endl;
    return nb1+nb2;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    addNumbers(1, 2);
    return 0;
}
