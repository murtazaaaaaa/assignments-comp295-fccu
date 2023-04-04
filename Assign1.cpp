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

