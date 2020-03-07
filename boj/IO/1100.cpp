#include <iostream>
using namespace std;

int main(void)
{
    char board[8][8];
    int i, j, total = 0;

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            cin >> board[i][j];
            
    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            if (i % 2 == 0 && j % 2 == 0 && board[i][j] == 'F')
                total += 1;
            else if (i % 2 == 1 && j % 2 == 1 && board[i][j] == 'F')
                total += 1;

    cout << total;

    return 0;
}