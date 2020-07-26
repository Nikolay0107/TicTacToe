
#include <iostream>
using namespace std;
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' }; // �������������� ���������� char ������ 3-3, ��� �����
char player = 'X'; // ���������� ��� ����� ������


// ������� ��� ��������� ������� matrix

void Draw()
{
    cout << "\n   Welcome to game TicTacToe!\n\n" ;
    //����������� �� ��������� �������
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


// ������� ��� ����� ������

void Input()
{
    int a;
    cout << "Press the number of the field";
    cin >> a;

    //����� ���������� ���� � ������������ ������� ������� ������������� ���������� ������.


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
������� ��� ����� ������ � �������� �� �����
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

    //������ ����������� ����
    //�������� ������� ����� ����, ��������� ������� (�����) � ����� ������
    while (1)
    {
        
        Draw();
        Input();
        TogglePlayer();
    }


    Draw();

    return 0;
}
