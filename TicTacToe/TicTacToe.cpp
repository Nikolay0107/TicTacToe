
#include <iostream>
using namespace std;
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' }; // инициализируем глобальный char массив 3-3, для доски


// функция для отрисовки массива matrix

void Draw()
{
    cout << "\n   Welcome to game TicTacToe!\n\n" ;
    //пробегаемся по элементам массива
    for (int i = 0; i < 3; i++)
    {
        cout << "\t";
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "   ";
        }

        cout << "\n\n";
    }
}



int main()
{
    Draw();

    return 0;
}
