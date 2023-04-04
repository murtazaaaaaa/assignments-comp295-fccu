#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

const int ROW = 4;
const int COL = 4;
int wall[ROW][COL];
int score = 0;
int highscore=0;
void gameWall() {
    srand(time(NULL));
    int row1 = rand() % ROW;
    int col1 = rand() % COL;
    int row2 = rand() % ROW;
    int col2 = rand() % COL;
    int num1 = rand() % 2;
    int num2 = rand() % 2;
    if (num1 == 0){
        wall[row1][col1] = 2;
    }
    else{
        wall[row1][col1] = 4;
    }
    if (num2 == 0){
        wall[row2][col2] = 4;
    }
    else{
        wall[row2][col2] = 2;
    }
}
void gameWall() {
    srand(time(NULL));
    int row1 = rand() % ROW;
    int col1 = rand() % COL;
    int row2 = rand() % ROW;
    int col2 = rand() % COL;
    int num1 = rand() % 2;
    int num2 = rand() % 2;
    if (num1 == 0){
        wall[row1][col1] = 2;
    }
    else{
        wall[row1][col1] = 4;
    }
    if (num2 == 0){
        wall[row2][col2] = 4;
    }
    else{
        wall[row2][col2] = 2;
    }
}

void printWall() {
    cout << "-----------------" << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (wall[i][j] == 0){
                cout << "|   ";
            }
            else{
                cout << "| " << wall[i][j] << " ";
            }
        }
        cout << "|" << endl;
        cout << "-----------------" << endl;
    }
    cout << "Score = " << score << endl;
}
bool checkGameOver() {
    for (int i = 0; i < ROW-1; i++) {
        for (int j = 0; j < COL-1; j++) {
            if (wall[i][j] == 0|| wall[i][j+1] == 0) {
                return false;
            }
            if (wall[i][j] == wall[i+1][j])
                return false;
            if (wall[i][j] == wall[i][j+1])
                return false;
        }
    }
    return true;
}

void addRNum() {
    bool added = false;
    while (!added) {
        int row = rand() % ROW;
        int col = rand() % COL;
        if (wall[row][col] == 0) {
            int num = rand() % 2;
            if (num == 0){
                wall[row][col] = 2;
            }
            else{
                wall[row][col] = 4;
            }
            added = true;
        }
    }
}

