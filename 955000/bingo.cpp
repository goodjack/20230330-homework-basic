#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    
    int bingo[5][5]; // 儲存賓果的 25 個亂數
    int number[25] = {0};
    
    for (int i = 0; i < 25; i++) {
        int pick;
        do {
            pick = rand() % 25 + 1;
        } while (number[pick-1] > 0);

        number[pick-1]++;

        cout << pick << "\n";
    }

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         bingo[i][j] = number[5*i+j];
    //     } // j
    // } // i

    for (int i = 0; i < 25; i++) {
        int y = i / 5;
        int x = i % 5;
        bingo[y][x] = number[i];
    }

    // // -----------

    // int number[25] = {0};
    // srand(time(0));
    // for (int i = 0; i < 25; i++) {
    //     int pick = rand() % 25 + 1;
    //     number[i] = pick;

    //     for (int j = 0; j < i; j++) {
    //         if (number[j] == pick) {
    //             i--;
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < 25; i++) {
    //     cout << number[i];
    // }
}
