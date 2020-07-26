
#include <iostream>
using namespace std;
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' }; // инициализируем глобальный char массив 3-3, для доски
char player = 'X'; // переменная для ходов игрока


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


// функция для ввода данных

void Input()
{
    int a;
    cout << "Press the number of the field";
    cin >> a;

    //после считывания хода в определенный элемент массива присваивается переменная игрока.


    if (a == 1)
        matrix[0][0] = player;
    else if (a == 2)
        matrix[0][1] = player;
    else if (a == 3)
        matrix[0][2] = player;
    else if (a == 4)
        matrix[1][0] = player;
    else if (a == 5)
        matrix[1][1] = player;
    else if (a == 6)
        matrix[1][2] = player;
    else if (a == 7)
        matrix[2][0] = player;
    else if (a == 8)
        matrix[2][1] = player;
    else if (a == 9)
        matrix[2][2] = player;

}



/*
Функция для смены игрока с крестика на нолик
*/

void TogglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';

}


int main()
{

    //Делаем бесконечный цикл
    //Фызываем функции ввода хода, отрисовки массива (доски) и смену игрока
    while (1)
    {
        
        Draw();
        Input();
        TogglePlayer();
    }


    Draw();

    return 0;
}
