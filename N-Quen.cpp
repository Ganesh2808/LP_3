#include<iostream>
#define N 4
using namespace std;

void printSolution(int b[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (b[i][j] == 1) {
                cout << "Q";
            }
            else {
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(int b[N][N], int row, int col) {
    int i, j;
    for (i = 0; i < col; i++) {
        if (b[row][i] == 1) {
            return false;
        }
    }

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (b[i][j] == 1) {
            return false;
        }
    }

    for (i = row, j = col; j >= 0 && i < N; j--, i++) {
        if (b[i][j] == 1) {
            return false;
        }
    }
    return true;
}

bool Solve_Nqproblem(int B[N][N], int col) {
    if (col >= N) {
        printSolution(B);
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++) {
        if (isSafe(B, i, col) == true) {
            B[i][col] = 1;
            res = Solve_Nqproblem(B, col + 1) || res;
            B[i][col] = 0; // Backtrack
        }
    }
    return res;
}

bool SolveNQ() {
    int board[N][N] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    if (Solve_Nqproblem(board, 0) == false) {
        cout << "No solution exists" << endl;
        return false;
    }
    return true;
}

int main() {
    SolveNQ();
    return 0;
}