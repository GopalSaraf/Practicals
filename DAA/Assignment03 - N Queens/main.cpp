#include <iostream>

#include "nQueens.h"

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    NQueens nQueens(n);
    nQueens.solveNQ();

    std::cout << "Final board:\n";
    nQueens.printBoard();

    return 0;
}