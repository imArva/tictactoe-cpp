#include <iostream>
#include <windows.h>

using namespace std;

string tictactoe[9] = {" "," "," "," "," "," "," "," "," "};

void table() {

    cout << "           |       |       " << endl;
    cout << "       " << tictactoe[0] << "   |   " << tictactoe[1] << "   |   " << tictactoe[2]<< "   " << endl;
    cout << "           |       |       " << endl;
    cout << "   ------------------------" << endl;
    cout << "           |       |       " << endl;
    cout << "       " << tictactoe[3] << "   |   " << tictactoe[4] << "   |   "<< tictactoe[5] << "   " << endl;
    cout << "           |       |       " << endl;
    cout << "   ------------------------" << endl;
    cout << "           |       |       " << endl;
    cout << "       " << tictactoe[6] << "   |   " << tictactoe[7] << "   |   "<< tictactoe[8] << "   " << endl;
    cout << "           |       |       " << endl;
}

void checkWin() {
    if (tictactoe[0] != " " && tictactoe[0] == tictactoe[3] && tictactoe[0]  == tictactoe[6])
    {
        cout << tictactoe[0] << " Won !" << endl;
        cout << "Program will exit in 3 sec..." << endl;
        Sleep(3 * 1000);
        exit(0);
    }
    if (tictactoe[1] != " " && tictactoe[1] == tictactoe[4] && tictactoe[1]  == tictactoe[7])
    {
        cout << tictactoe[1] << " Won !" << endl;
        cout << "Program will exit in 3 sec..." << endl;
        Sleep(3 * 1000);
        exit(0);
    }
    if (tictactoe[2] != " " && tictactoe[2] == tictactoe[3] && tictactoe[2]  == tictactoe[8])
    {
        cout << tictactoe[2] << " Won !" << endl;
        cout << "Program will exit in 3 sec..." << endl;
        Sleep(3 * 1000);
        exit(0);
    }
    
    // horizontal win
    if (tictactoe[0] != " " && tictactoe[0] == tictactoe[1] && tictactoe[0]  == tictactoe[2])
    {
        cout << tictactoe[0] << " Won !" << endl;
        cout << "Program will exit in 3 sec..." << endl;
        Sleep(3 * 1000);
        exit(0);
    }
    if (tictactoe[3] != " " && tictactoe[3] == tictactoe[4] && tictactoe[3]  == tictactoe[5])
    {
        cout << tictactoe[3] << " Won !" << endl;
        cout << "Program will exit in 3 sec..." << endl;
        Sleep(3 * 1000);
        exit(0);
    }
    if (tictactoe[6] != " " && tictactoe[6] == tictactoe[7] && tictactoe[6]  == tictactoe[8])
    {
        cout << tictactoe[6] << " Won !" << endl;
        cout << "Program will exit in 3 sec..." << endl;
        Sleep(3 * 1000);
        exit(0);
    }

    // cross win
    if (tictactoe[2] != " " && tictactoe[2] == tictactoe[4] && tictactoe[2]  == tictactoe[6])
    {
        cout << tictactoe[2] << " Won !" << endl;
        Sleep(5 * 1000);
        exit(0);
    }
    if (tictactoe[0] != " " && tictactoe[0] == tictactoe[4] && tictactoe[0]  == tictactoe[8])
    {
        cout << tictactoe[0] << " Won !" << endl;
        Sleep(5 * 1000);
        exit(0);
    }
}

int main(int argc, char const *argv[])
{
    string whosTurn = "O"; // O or X
    int turn;

    while (true)
    {
        table();

        cout << "Jalan (0-8) 0 dari atas kanan : ";
        cin >> turn;

        if (tictactoe[turn] != " ")
        {
            cout << "Sudah terisi !" << endl;
        } else {
            tictactoe[turn] = whosTurn;
        }

        if (whosTurn == "O")
        {
            whosTurn = "X";
        } else
        {
            whosTurn = "O";
        }

        system("CLS");
        checkWin();
    }
    
    return 0;
}

