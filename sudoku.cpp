#include <iostream>
#include <string>
using namespace std;
#define N 9
class sudoku
{
    int possible[N][N][N];
    int grid[N][N];
    int user_grid[N][N];

public:
    sudoku() {};
    void menu();
    void user_setter(int arr[N][N]);
    void setter(int arr[N][N]);
    void display(int arr[N][N]);
    bool checker(int row, int column, int num);
    void convertor();
    void filler();
    void single_possiblity();
    void single_occcurence_row(int row);
    void single_occcurence_column(int column);
    bool user_solver();
    void solver();
};
void sudoku::menu()
{
    int choice;
    cout << "\t\t ________________________________________________________________________" << endl;
    cout << "\t\t|                                                                        |" << endl;
    cout << "\t\t|                         WELCOME TO SUDOKU GAME                         |" << endl;
    cout << "\t\t|________________________________________________________________________|" << endl;
    cout << endl;
    cout << "\t\t\t\t\tSELECT THE DIFFICULTY LEVEL" << endl;
    cout << endl;
    cout << "\t1. EASY LEVEL  2. MEDIUM LEVEL  3. HARD LEVEL  4. EXPERT LEVEL  5.MASTER LEVEL  6.EXTREME LEVEL" << endl;
    cout << endl;
    cout << "\t\t\t\t\tWHICH LEVEL DO YOU CHOOSE -> ";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        // easy level sudoku
        {
            int arr1[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                              {5, 2, 0, 0, 0, 0, 0, 0, 0},
                              {0, 8, 7, 0, 0, 0, 0, 3, 1},
                              {0, 0, 3, 0, 1, 0, 0, 8, 0},
                              {9, 0, 0, 8, 6, 3, 0, 0, 5},
                              {0, 5, 0, 0, 9, 0, 6, 0, 0},
                              {1, 3, 0, 0, 0, 0, 2, 5, 0},
                              {0, 0, 0, 0, 0, 0, 0, 7, 4},
                              {0, 0, 5, 2, 0, 6, 3, 0, 0}};
            sudoku::setter(arr1);
            sudoku::user_setter(arr1);
            cout << "\t\t\t\t\t     EASY LEVEL SUDOKU" << endl;
            cout << endl;
            sudoku::display(grid);
            sudoku::solver();
            if (sudoku::user_solver())
            {
                cout << "\t\t\t\t\t\tSOLVED SUDOKU" << endl;
                cout << endl;
                sudoku::display(grid);
            }
        }
        break;
    case 2:
        // medium level sudoku
        {
            int arr2[N][N] = {{0, 0, 0, 7, 6, 0, 9, 0, 0},
                              {7, 4, 0, 0, 2, 9, 0, 0, 0},
                              {0, 0, 6, 0, 0, 0, 0, 5, 0},
                              {0, 7, 9, 2, 3, 5, 1, 0, 6},
                              {5, 1, 4, 8, 7, 0, 3, 0, 9},
                              {0, 0, 0, 0, 0, 4, 5, 0, 8},
                              {6, 5, 0, 3, 0, 0, 0, 9, 0},
                              {0, 0, 0, 0, 0, 2, 7, 0, 0},
                              {0, 8, 7, 0, 0, 0, 4, 3, 0}};
            sudoku::setter(arr2);
            sudoku::user_setter(arr2);
            cout << "\t\t\t\t\t     MEDIUM LEVEL SUDOKU" << endl;
            cout << endl;
            sudoku::display(grid);
            sudoku::solver();
            if (sudoku::user_solver())
            {
                cout << "\t\t\t\t\t\tSOLVED SUDOKU" << endl;
                cout << endl;
                sudoku::display(grid);
            }
        }
        break;
    case 3:
        // hard level sudoku
        {
            int arr3[N][N] = {{0, 7, 2, 0, 0, 1, 0, 0, 0},
                              {0, 4, 0, 0, 0, 0, 0, 1, 0},
                              {0, 3, 1, 6, 0, 0, 0, 5, 0},
                              {0, 0, 5, 9, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 4, 2, 0},
                              {0, 2, 8, 0, 7, 0, 5, 6, 0},
                              {1, 5, 7, 0, 9, 0, 0, 3, 2},
                              {0, 0, 6, 0, 1, 8, 7, 0, 0},
                              {0, 8, 0, 0, 0, 0, 0, 0, 6}};
            sudoku::setter(arr3);
            sudoku::user_setter(arr3);
            cout << "\t\t\t\t\t     HARD LEVEL SUDOKU" << endl;
            cout << endl;
            sudoku::display(grid);
            sudoku::solver();
            if (sudoku::user_solver())
            {
                cout << "\t\t\t\t\t\tSOLVED SUDOKU" << endl;
                cout << endl;
                sudoku::display(grid);
            }
        }
        break;
    case 4:
        // expert level sudoku
        {
            int arr4[N][N] = {{0, 0, 9, 0, 0, 0, 0, 0, 5},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 8, 0, 1, 0, 0, 0, 7, 4},
                              {9, 2, 0, 8, 1, 0, 5, 0, 0},
                              {0, 0, 3, 2, 0, 0, 0, 0, 8},
                              {0, 5, 1, 3, 0, 4, 6, 0, 0},
                              {0, 0, 8, 0, 7, 2, 0, 1, 0},
                              {3, 4, 0, 9, 0, 0, 7, 8, 0},
                              {0, 0, 7, 0, 0, 8, 0, 0, 0}};
            sudoku::setter(arr4);
            sudoku::user_setter(arr4);
            cout << "\t\t\t\t\t     EXPERT LEVEL SUDOKU" << endl;
            cout << endl;
            sudoku::display(grid);
            sudoku::solver();
            if (sudoku::user_solver())
            {
                cout << "\t\t\t\t\t\tSOLVED SUDOKU" << endl;
                cout << endl;
                sudoku::display(grid);
            }
        }
        break;
    case 5:
        // master level sudoku
        {
            int arr5[N][N] = {{0, 0, 0, 4, 0, 0, 1, 9, 0},
                              {0, 3, 0, 0, 0, 0, 8, 6, 0},
                              {0, 0, 7, 0, 8, 3, 5, 0, 0},
                              {0, 0, 0, 0, 0, 8, 6, 0, 0},
                              {8, 0, 5, 1, 0, 0, 0, 0, 0},
                              {0, 2, 0, 0, 0, 0, 3, 5, 0},
                              {0, 8, 1, 0, 4, 0, 0, 0, 0},
                              {0, 0, 0, 0, 7, 0, 0, 0, 0},
                              {0, 4, 0, 2, 5, 0, 0, 0, 0}};
            sudoku::setter(arr5);
            sudoku::user_setter(arr5);
            cout << "\t\t\t\t\t     MASTER LEVEL SUDOKU" << endl;
            cout << endl;
            sudoku::display(grid);
            sudoku::solver();
            if (sudoku::user_solver())
            {
                cout << "\t\t\t\t\t\tSOLVED SUDOKU" << endl;
                cout << endl;
                sudoku::display(grid);
            }
        }
        break;
    case 6:
        // extreme level sudoku
        {
            int arr6[N][N] = {{5, 0, 3, 0, 0, 4, 0, 6, 2},
                              {0, 0, 0, 0, 9, 0, 0, 0, 4},
                              {0, 0, 8, 0, 0, 0, 0, 0, 0},
                              {0, 8, 0, 0, 0, 5, 0, 0, 0},
                              {0, 9, 0, 0, 0, 0, 0, 2, 0},
                              {2, 0, 5, 0, 7, 0, 3, 0, 0},
                              {6, 0, 4, 0, 0, 9, 0, 3, 0},
                              {0, 0, 0, 1, 0, 0, 7, 0, 0},
                              {0, 2, 0, 0, 0, 0, 0, 0, 0}};
            sudoku::setter(arr6);
            sudoku::user_setter(arr6);
            cout << "\t\t\t\t\t     EXTREME LEVEL SUDOKU" << endl;
            cout << endl;
            sudoku::display(grid);
            sudoku::solver();
            if (sudoku::user_solver())
            {
                cout << "\t\t\t\t\t\tSOLVED SUDOKU" << endl;
                cout << endl;
                sudoku::display(grid);
            }
        }
        break;
    default:
        break;
    }
}
void sudoku::user_setter(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            user_grid[i][j] = arr[i][j];
        }
    }
}
void sudoku::setter(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            grid[i][j] = arr[i][j];
        }
    }
}
void sudoku::display(int arr[N][N])
{
    for (int row = 0; row < N; row++)
    {
        cout << "\t\t\t\t     ";
        for (int column = 0; column < N; column++)
        {
            if (arr[row][column] != 0)
            {
                cout << arr[row][column];
            }
            else
            {
                cout << " ";
            }
            if (column != (N - 1))
            {
                if (column % 3 == 2)
                {
                    cout << " || ";
                }
                else
                {
                    cout << " | ";
                }
            }
        }
        cout << endl;
        cout << "\t\t\t\t     ";
        if (row != (N - 1))
        {
            if (row % 3 == 2)
            {
                cout << "===================================";
            }
            else
            {
                cout << "-----------------------------------";
            }
            cout << endl;
        }
    }
    cout << endl;
}
bool sudoku::checker(int row, int column, int num)
{
    // Row checker
    for (int i = 0; i < N; i++)
    {
        if (grid[row][i] == num)
            return false;
    }
    // Column checker
    for (int i = 0; i < N; i++)
    {
        if (grid[i][column] == num)
            return false;
    }
    // Box checker
    int startRow = row - row % 3, startCol = column - column % 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i + startRow][j + startCol] == num)
                return false;
        }
    }
    return true;
}
// Converting 2-D array into 3-D array
void sudoku::convertor()
{
    for (int j = 0; j < N; j++)
    {
        for (int k = 0; k < N; k++)
        {
            possible[0][j][k] = grid[j][k];
        }
    }
}
// filling all the possiblities
void sudoku::filler()
{
    // first zeroing all pervious possiblities
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                possible[i][j][k] = 0;
            }
        }
    }
    // filling new possiblities
    int pos;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j] == 0)
            {
                pos = 1;
                for (int num = 1; num <= 9; num++)
                {
                    if (sudoku::checker(i, j, num))
                    {
                        possible[pos][i][j] = num;
                        pos++;
                    }
                }
            }
        }
    }
}
// chekcs if a position has single possiblity and fills it
void sudoku::single_possiblity()
{
    int pos = 0;
    int num;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (possible[pos][i][j] == 0 && possible[(pos + 2)][i][j] == 0)
            {
                num = possible[pos + 1][i][j];
                if (sudoku::checker(i, j, num))
                {
                    grid[i][j] = possible[(pos + 1)][i][j];
                    possible[(pos)][i][j] = possible[(pos + 1)][i][j];
                    possible[(pos + 1)][i][j] = 0;
                }
            }
        }
    }
}
// checks the occurence row wise and fills correct digits
void sudoku::single_occcurence_row(int row)
{
    int count, loc, k;
    for (int num = 1; num <= N; num++)
    {
        count = 0;
        for (int i = 0; i < N; i++)
        {
            if (possible[0][row][i] == 0)
            {
                k = 1;
                while (possible[k][row][i] != 0)
                {
                    if (possible[k][row][i] == num)
                    {
                        count++;
                        loc = i;
                    }
                    k++;
                }
            }
            else
                continue;
        }
        if (count == 1)
        {
            if (sudoku::checker(row, loc, num))
            {
                grid[row][loc] = num;
                possible[0][row][loc] = num;
                for (int i = 1; i < N; i++)
                    possible[i][row][loc] = 0;
            }
        }
    }
}
// checks the occurence column wise and fills correct digits
void sudoku::single_occcurence_column(int column)
{
    int count, loc, k;
    for (int num = 1; num <= N; num++)
    {
        count = 0;
        for (int i = 0; i < N; i++)
        {
            if (possible[0][i][column] == 0)
            {
                k = 1;
                while (possible[k][i][column] != 0)
                {
                    if (possible[k][i][column] == num)
                    {
                        count++;
                        loc = i;
                    }
                    k++;
                }
            }
            else
                continue;
        }
        if (count == 1)
        {
            if (sudoku::checker(loc, column, num))
            {
                grid[loc][column] = num;
                possible[0][loc][column] = num;
                for (int i = 1; i < N; i++)
                    possible[i][loc][column] = 0;
            }
        }
    }
}
bool sudoku::user_solver()
{
    bool c;
    string ch;
    int row, column, num, zero, count = 0;
    while (c = true)
    {
        cout << "\t\t\t\t\t     ENTER THE ROW -> ";
        cin >> row;
        cout << endl;
        cout << "\t\t\t\t\t   ENTER THE COLUMN -> ";
        cin >> column;
        cout << endl;
        cout << "\t\t\t\t\t   ENTER THE NUMBER -> ";
        cin >> num;
        cout << endl;
        if (grid[row - 1][column - 1] == num)
        {
            cout << "\t\t\t\t\t      IT IS CORRECT!!" << endl;
            cout << endl;
            user_grid[row - 1][column - 1] = num;
            display(user_grid);
            count++;
            if (count % 3 == 0)
            {
                cout << "\t\t\t\t    DO YOU WANT TO SEE THE SOLVED SUDOKU" << endl;
                cout << endl;
                cout << "\t\t\t\t\t         (YES/NO)" << endl;
                cout << endl;
                cout << "\t\t\t\t\t            ";
                cin >> ch;
                cout<<endl;
                if ((ch == "yes") || (ch == "YES") || (ch == "Yes"))
                    break;
                else
                    continue;
            }
        }
        else
        {
            cout << "\t\t\t\t\t       IT IS WRONG!!" << endl;
            cout << endl;
            display(user_grid);
            cout << "\t\t\t\t    DO YOU WANT TO SEE THE SOLVED SUDOKU" << endl;
            cout << endl;
            cout << "\t\t\t\t\t         (YES/NO)" << endl;
            cout << endl;
            cout << "\t\t\t\t\t            ";
            cin >> ch;
            cout << endl;
            if ((ch == "yes") || (ch == "YES") || (ch == "Yes"))
                break;
            else
                continue;
        }
        zero = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (user_grid[i][j] == 0)
                {
                    zero++;
                }
            }
        }
        if (zero == 0)
        {
            cout << "\t\t\t\t\tCONGRATULATIONS YOU HAVE THE SUDOKU" << endl;
            display(user_grid);
            return false;
        }
    }
    return true;
}
// main solver function
void sudoku::solver()
{
    int count;
    bool c;
    sudoku::convertor();
    sudoku::filler();
    while (c = true)
    {
        sudoku::single_possiblity();
        for (int i = 0; i < N; i++)
        {
            sudoku::single_occcurence_row(i);
            sudoku::single_occcurence_column(i);
        }
        sudoku::filler();
        count = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (grid[i][j] == 0)
                {
                    count++;
                }
            }
        }
        if (count == 0)
            break;
    }
}
int main()
{
    sudoku s;
    s.menu();
    return 0;
}