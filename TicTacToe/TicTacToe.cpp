
#include <iostream>
#include <Windows.h> // ���������� ��������� ��� �����
using namespace std;
HANDLE colour = GetStdHandle(STD_OUTPUT_HANDLE); // ���������� ��� �����

char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' }; // �������������� ���������� char ������ 3-3, ��� �����
char player = 'X'; // ���������� ��� ����� ������


// ������� ��� ����� ����� ������ � �������

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;

    /*
    Name         | Value
                |
    Black        |   0
    Blue         |   1
    Green        |   2
    Cyan         |   3
    Red          |   4
    Magenta      |   5
    Brown        |   6
    Light Gray   |   7
    Dark Gray    |   8
    Light Blue   |   9
    Light Green  |   10
    Light Cyan   |   11
    Light Red    |   12
    Light Magenta|   13
    Yellow       |   14
    White        |   15
    */

}



// ������� ��� ��������� ������� matrix

void Draw()
{
    system("cls"); // ��� ������� ������� �� ������� �������� ����������
    SetColor(13);
    cout << "\n   Welcome to game TicTacToe!\n\n";
    SetColor(11);
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
    SetColor(14);
    cout << "  Press the number of the field:\t";
    SetColor(11);
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
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
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
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
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
            SetColor(10); // ��� ����� ������ ��� ��������
            cout << "\tX wins!\n\n";
            SetColor(14);
            break;
        }
        else if (Win() == 'O')
        {
            SetColor(10); // ��� ����� ������ ��� ��������
            cout << "\tO wins!\n\n";
            SetColor(14);
            break;
        }
        TogglePlayer();
    }
    return 0;
}
