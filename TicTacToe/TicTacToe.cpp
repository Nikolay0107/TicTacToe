
#include <iostream>
using namespace std;
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' }; // �������������� ���������� char ������ 3-3, ��� �����
char player = 'X'; // ���������� ��� ����� ������


// ������� ��� ��������� ������� matrix

void Draw()
{
    system("cls"); // ��� ������� ������� �� ������� �������� ����������

    cout << "\n   Welcome to game TicTacToe!\n\n";
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
    cout << "Press the number of the field:\t";
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

/*
������� ��� �������� �� ��������
*/


char Win()
{

    //�������� ��� ������ �

    //�������� ��� �����
    
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    //�������� ��� ��������
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
    //�������� ��� ����������
    if (matrix[0][0] == 'X' && matrix[1][2] == 'X' && matrix[2][3] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][0] == 'X')
        return 'X';



    //�������� ��� ������ O

     //�������� ��� �����
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    //�������� ��� ��������
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
    //�������� ��� ����������
    if (matrix[0][0] == 'O' && matrix[1][2] == 'O' && matrix[2][3] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][0] == 'O')
        return 'O';

    return '/';
}



int main()
{

    //������ ����������� ����
    //�������� ������� ����� ����, ��������� ������� (�����) � ����� ������
    Draw();
    while (1)
    {
        Input();
        Draw();   
        if (Win() == 'X')
        {
            cout << "\tX wins!\n\n";
            break;
        }
        else if (Win() == 'O')
        {
            cout << "\tO wins!\n\n";
            break;
        }
        TogglePlayer();
    }
    return 0;
}
