#pragma once
#include <iostream>

class NQueens {
    int n;
    int **board;

   public:
    NQueens(int n) : n(n) {
        board = new int *[n];
        for (int i = 0; i < n; i++) {
            board[i] = new int[n];
            for (int j = 0; j < n; j++) {
                board[i][j] = 0;
            }
        }
    }

   private:
    bool isSafe(int row, int col) {
        // Check this row on left side
        for (int i = 0; i < col; i++) {
            if (board[row][i]) {
                return false;
            }
        }

        // Check upper diagonal on left side
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j]) {
                return false;
            }
        }

        // Check lower diagonal on left side
        for (int i = row, j = col; j >= 0 && i < n; i++, j--) {
            if (board[i][j]) {
                return false;
            }
        }

        return true;
    }

    bool solveNQUtil(int col, int iteration) {
        if (col >= n) {
            return true;
        }

        for (int i = 0; i < n; i++) {
            if (isSafe(i, col)) {
                board[i][col] = 1;

                std::cout << "Iteration " << iteration << ": Placed queen at ("
                          << i << ", " << col << ")\n";
                printBoard();

                if (solveNQUtil(col + 1, iteration + 1)) {
                    return true;
                }

                board[i][col] = 0;

                std::cout << "Iteration " << iteration
                          << ": Removed queen from (" << i << ", " << col
                          << ")\n";
                printBoard();
            }
        }

        return false;
    }

   public:
    bool solveNQ() {
        if (solveNQUtil(0, 1) == false) {
            return false;
        }

        return true;
    }

    void printBoard() {
        for (int i = 0; i < n; i++) {
            std::cout << "\n";
            for (int j = 0; j < n; j++) {
                std::cout << " " << board[i][j] << " ";
            }
        }
        std::cout << "\n\n";
    }

    ~NQueens() {
        for (int i = 0; i < n; i++) {
            delete[] board[i];
        }
        delete[] board;
    }
};
