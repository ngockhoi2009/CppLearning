#include <bits/stdc++.h>
using namespace std;


bool hangcot(int a[][9], int i, int j, int n) {
    for (int t = 0; t <= 8; t++) {
        if (a[i][t] == n) return false;
        if (a[t][j] == n) return false;
    }
    return true;
}


bool o(int a[][9], int i, int j, int n) {
    if (0 <= i && i <= 2) {
        if (0 <= j && j <= 2) {
            for (int t = 0; t <= 2; t++)
                for (int p = 0; p <= 2; p++)
                    if (a[t][p] == n) return false;
        }
        if (3 <= j && j <= 5) {
            for (int t = 0; t <= 2; t++)
                for (int p = 3; p <= 5; p++)
                    if (a[t][p] == n) return false;
        }
        if (6 <= j && j <= 8) {
            for (int t = 0; t <= 2; t++)
                for (int p = 6; p <= 8; p++)
                    if (a[t][p] == n) return false;
        }
    }
    if (3 <= i && i <= 5) {
        if (0 <= j && j <= 2) {
            for (int t = 3; t <= 5; t++)
                for (int p = 0; p <= 2; p++)
                    if (a[t][p] == n) return false;
        }
        if (3 <= j && j <= 5) {
            for (int t = 3; t <= 5; t++)
                for (int p = 3; p <= 5; p++)
                    if (a[t][p] == n) return false;
        }
        if (6 <= j && j <= 8) {
            for (int t = 3; t <= 5; t++)
                for (int p = 6; p <= 8; p++)
                    if (a[t][p] == n) return false;
        }
    }
    if (6 <= i && i <= 8) {
        if (0 <= j && j <= 2) {
            for (int t = 6; t <= 8; t++)
                for (int p = 0; p <= 2; p++)
                    if (a[t][p] == n) return false;
        }
        if (3 <= j && j <= 5) {
            for (int t = 6; t <= 8; t++)
                for (int p = 3; p <= 5; p++)
                    if (a[t][p] == n) return false;
        }
        if (6 <= j && j <= 8) {
            for (int t = 6; t <= 8; t++)
                for (int p = 6; p <= 8; p++)
                    if (a[t][p] == n) return false;
        }
    }
    return true;
}

bool solve = false;
void Sudoku(int a[][9]) {
	if (solve) return;
    for (int i = 0; i <= 8; i++) {
        for (int j = 0; j <= 8; j++) {
            if (a[i][j] == 0) {
                for (int n = 1; n <= 9; n++) {
                    if (hangcot(a, i, j, n) && o(a, i, j, n)) {
                        a[i][j] = n;
                        Sudoku(a);
                        a[i][j] = 0; 
                    }
                }
                return; 
            }
        }
    }
    solve = true;
    for (int i = 0; i <= 8; i++) {
    for (int j = 0; j <= 8; j++)
        cout << a[i][j] << " ";
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };
    Sudoku(a);
}
