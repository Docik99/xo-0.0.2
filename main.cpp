
#include <iostream>

using namespace std;

void vivod(char pos1, char pos2, char pos3, char pos4, char pos5, char pos6, char pos7, char pos8, char pos9, char pos10, char pos11, char pos12, char pos13, char pos14, char pos15, char pos16, char pos17, char pos18, char pos19, char pos20, char pos21, char pos22, char pos23, char pos24, char pos25)
{
    cout << "    1   2   3   4   5" << endl;
    cout << "  +---+---+---+---+---+" << endl;
    cout << "a | " << pos1 << " | " << pos2 << " | " << pos3 << " | " << pos4 << " | " << pos5 << " | " << endl;
    cout << "  +---+---+---+---+---+" << endl;
    cout << "b | " << pos6 << " | " << pos7 << " | " << pos8 << " | " << pos9 << " | " << pos10 << " | " << endl;
    cout << "  +---+---+---+---+---+" << endl;
    cout << "c | " << pos11 << " | " << pos12 << " | " << pos13 << " | " << pos14 << " | " << pos15 << " | " << endl;
    cout << "  +---+---+---+---+---+" << endl;
    cout << "d | " << pos16 << " | " << pos17 << " | " << pos18 << " | " << pos19 << " | " << pos20 << " | " << endl;
    cout << "  +---+---+---+---+---+" << endl;
    cout << "e | " << pos21 << " | " << pos22 << " | " << pos23 << " | " << pos24 << " | " << pos25 << " | " << endl;
    cout << "  +---+---+---+---+---+" << endl;
}
void check(char & pos1, char & pos2, char & pos3, char & pos4, char & pos5, char & pos6, char & pos7, char & pos8, char & pos9, char & pos10, char & pos11, char & pos12, char & pos13, char & pos14, char & pos15, char & pos16, char & pos17, char & pos18, char & pos19, char & pos20, char & pos21, char & pos22, char & pos23, char & pos24, char & pos25)
{
    if (pos1 == pos2 && pos2 == pos3 && pos3 == pos4 && pos4 == pos5 && pos1 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos6 == pos7 && pos7 == pos8 && pos8 == pos9 && pos9 == pos10 && pos6 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos11 == pos12 && pos12 == pos13 && pos13 == pos14 && pos14 == pos15 && pos11 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos16 == pos17 && pos17 == pos18 && pos18 == pos19 && pos19 == pos20 && pos16 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos21 == pos22 && pos22 == pos23 && pos23 == pos24 && pos24 == pos25 && pos21 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos1 == pos6 && pos6 == pos11 && pos11 == pos16 && pos16 == pos21 && pos1 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos2 == pos7 && pos7 == pos12 && pos12 == pos17 && pos17 == pos22 && pos2 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos3 == pos8 && pos8 == pos13 && pos13 == pos18 && pos18 == pos23 && pos3 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos4 == pos9 && pos9 == pos14 && pos14 == pos19 && pos19 == pos24 && pos4 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos5 == pos10 && pos10 == pos15 && pos15 == pos20 && pos20 == pos25 && pos5 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos1 == pos7 && pos7 == pos13 && pos13 == pos19 && pos19 == pos25 && pos1 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    if (pos5 == pos9 && pos9 == pos13 && pos13 == pos17 && pos17 == pos21 && pos5 == 'X')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "X win";
        exit(9);
    }

    //

    if (pos1 == pos2 && pos2 == pos3 && pos3 == pos4 && pos4 == pos5 && pos1 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos6 == pos7 && pos7 == pos8 && pos8 == pos9 && pos9 == pos10 && pos6 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos11 == pos12 && pos12 == pos13 && pos13 == pos14 && pos14 == pos15 && pos11 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos16 == pos17 && pos17 == pos18 && pos18 == pos19 && pos19 == pos20 && pos16 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos21 == pos22 && pos22 == pos23 && pos23 == pos24 && pos24 == pos25 && pos21 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos1 == pos6 && pos6 == pos11 && pos11 == pos16 && pos16 == pos21 && pos1 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos2 == pos7 && pos7 == pos12 && pos12 == pos17 && pos17 == pos22 && pos2 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos3 == pos8 && pos8 == pos13 && pos13 == pos18 && pos18 == pos23 && pos3 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos4 == pos9 && pos9 == pos14 && pos14 == pos19 && pos19 == pos24 && pos4 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos5 == pos10 && pos10 == pos15 && pos15 == pos20 && pos20 == pos25 && pos5 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos1 == pos7 && pos7 == pos13 && pos13 == pos19 && pos19 == pos25 && pos1 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }

    if (pos5 == pos9 && pos9 == pos13 && pos13 == pos17 && pos17 == pos21 && pos5 == 'O')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        cout << "O win";
        exit(9);
    }
}
void change(char & pos1, char & pos2, char & pos3, char & pos4, char & pos5, char & pos6, char & pos7, char & pos8, char & pos9, char & pos10, char & pos11, char & pos12, char & pos13, char & pos14, char & pos15, char & pos16, char & pos17, char & pos18, char & pos19, char & pos20, char & pos21, char & pos22, char & pos23, char & pos24, char & pos25, int cell, int & s)
{
    if (cell == 1 && s % 2 == 0 && pos1 != 'O') {pos1 = 'X';s++;}
    if (cell == 1 && s % 2 != 0 && pos1 != 'X') {pos1 = 'O';s++;}

    if (cell == 2 && s % 2 == 0 && pos2 != 'O') {pos2 = 'X';s++;}
    if (cell == 2 && s % 2 != 0 && pos2 != 'X') {pos2 = 'O';s++;}

    if (cell == 3 && s % 2 == 0 && pos3 != 'O') {pos3 = 'X';s++;}
    if (cell == 3 && s % 2 != 0 && pos3 != 'X') {pos3 = 'O';s++;}

    if (cell == 4 && s % 2 == 0 && pos4 != 'O') {pos4 = 'X';s++;}
    if (cell == 4 && s % 2 != 0 && pos4 != 'X') {pos4 = 'O';s++;}

    if (cell == 5 && s % 2 == 0 && pos5 != 'O') {pos5 = 'X';s++;}
    if (cell == 5 && s % 2 != 0 && pos5 != 'X') {pos5 = 'O';s++;}

    if (cell == 6 && s % 2 == 0 && pos6 != 'O') {pos6 = 'X';s++;}
    if (cell == 6 && s % 2 != 0 && pos6 != 'X') {pos6 = 'O';s++;}

    if (cell == 7 && s % 2 == 0 && pos7 != 'O') {pos7 = 'X';s++;}
    if (cell == 7 && s % 2 != 0 && pos7 != 'X') {pos7 = 'O';s++;}

    if (cell == 8 && s % 2 == 0 && pos8 != 'O') {pos8 = 'X';s++;}
    if (cell == 8 && s % 2 != 0 && pos8 != 'X') {pos8 = 'O';s++;}

    if (cell == 9 && s % 2 == 0 && pos9 != 'O') {pos9 = 'X';s++;}
    if (cell == 9 && s % 2 != 0 && pos9 != 'X') {pos9 = 'O';s++;}

    if (cell == 10 && s % 2 == 0 && pos10 != 'O') {pos10 = 'X';s++;}
    if (cell == 10 && s % 2 != 0 && pos10 != 'X') {pos10 = 'O';s++;}

    if (cell == 11 && s % 2 == 0 && pos11 != 'O') {pos11 = 'X';s++;}
    if (cell == 11 && s % 2 != 0 && pos11 != 'X') {pos11 = 'O';s++;}

    if (cell == 12 && s % 2 == 0 && pos12 != 'O') {pos12 = 'X';s++;}
    if (cell == 12 && s % 2 != 0 && pos12 != 'X') {pos12 = 'O';s++;}

    if (cell == 13 && s % 2 == 0 && pos13 != 'O') {pos13 = 'X';s++;}
    if (cell == 13 && s % 2 != 0 && pos13 != 'X') {pos13 = 'O';s++;}

    if (cell == 14 && s % 2 == 0 && pos14 != 'O') {pos14 = 'X';s++;}
    if (cell == 14 && s % 2 != 0 && pos14 != 'X') {pos14 = 'O';s++;}

    if (cell == 15 && s % 2 == 0 && pos15 != 'O') {pos15 = 'X';s++;}
    if (cell == 15 && s % 2 != 0 && pos15 != 'X') {pos15 = 'O';s++;}

    if (cell == 16 && s % 2 == 0 && pos16 != 'O') {pos16 = 'X';s++;}
    if (cell == 16 && s % 2 != 0 && pos16 != 'X') {pos16 = 'O';s++;}

    if (cell == 17 && s % 2 == 0 && pos17 != 'O') {pos17 = 'X';s++;}
    if (cell == 17 && s % 2 != 0 && pos17 != 'X') {pos17 = 'O';s++;}

    if (cell == 18 && s % 2 == 0 && pos18 != 'O') {pos18 = 'X';s++;}
    if (cell == 18 && s % 2 != 0 && pos18 != 'X') {pos18 = 'O';s++;}

    if (cell == 19 && s % 2 == 0 && pos19 != 'O') {pos19 = 'X';s++;}
    if (cell == 19 && s % 2 != 0 && pos19 != 'X') {pos19 = 'O';s++;}

    if (cell == 20 && s % 2 == 0 && pos20 != 'O') {pos20 = 'X';s++;}
    if (cell == 20 && s % 2 != 0 && pos20 != 'X') {pos20 = 'O';s++;}

    if (cell == 21 && s % 2 == 0 && pos21 != 'O') {pos21 = 'X';s++;}
    if (cell == 21 && s % 2 != 0 && pos21 != 'X') {pos21 = 'O';s++;}

    if (cell == 22 && s % 2 == 0 && pos22 != 'O') {pos22 = 'X';s++;}
    if (cell == 22 && s % 2 != 0 && pos22 != 'X') {pos22 = 'O';s++;}

    if (cell == 23 && s % 2 == 0 && pos23 != 'O') {pos23 = 'X';s++;}
    if (cell == 23 && s % 2 != 0 && pos23 != 'X') {pos23 = 'O';s++;}

    if (cell == 24 && s % 2 == 0 && pos24 != 'O') {pos24 = 'X';s++;}
    if (cell == 24 && s % 2 != 0 && pos24 != 'X') {pos24 = 'O';s++;}

    if (cell == 25 && s % 2 == 0 && pos25 != 'O') {pos25 = 'X';s++;}
    if (cell == 25 && s % 2 != 0 && pos25 != 'X') {pos25 = 'O';s++;}

    if (cell == 26) exit(6);
}
int main()
{
    char pos1 = ' ', pos2 = ' ', pos3 = ' ', pos4 = ' ', pos5 = ' ', pos6 = ' ', pos7 = ' ', pos8 = ' ', pos9 = ' ', pos10 = ' ', pos11 = ' ', pos12 = ' ', pos13 = ' ', pos14 = ' ', pos15 = ' ', pos16 = ' ', pos17 = ' ', pos18 = ' ', pos19 = ' ', pos20 = ' ', pos21 = ' ', pos22 = ' ', pos23 = ' ', pos24 = ' ', pos25 = ' ' ;
    int s = 0, cell, i = 1, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26 ;

    while (pos1 == ' ' || pos2 == ' ' || pos3 == ' ' || pos4 == ' ' || pos5 == ' ' || pos6 == ' ' || pos7 == ' ' || pos8 == ' ' || pos9 == ' ' || pos10 == ' ' || pos11 == ' ' || pos12 == ' ' || pos13 == ' ' || pos14 == ' ' || pos15 == ' ' || pos16 == ' ' || pos17 == ' ' || pos18 == ' ' || pos19 == ' ' || pos20 == ' ' || pos21 == ' ' || pos22 == ' ' || pos23 == ' ' || pos24 == ' ' || pos25 == ' ')
    {
        check(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);

        if (s % 2 == 0)
        {
            if (pos1 == ' '){cout << i << ". mark cell a1 as X\n"; p1 = i; i++;}
            if (pos2 == ' '){cout << i << ". mark cell a2 as X\n"; p2 = i; i++;}
            if (pos3 == ' '){cout << i << ". mark cell a3 as X\n"; p3 = i; i++;}
            if (pos4 == ' '){cout << i << ". mark cell a4 as X\n"; p4 = i; i++;}
            if (pos5 == ' '){cout << i << ". mark cell a5 as X\n"; p5 = i; i++;}
            if (pos6 == ' '){cout << i << ". mark cell b1 as X\n"; p6 = i; i++;}
            if (pos7 == ' '){cout << i << ". mark cell b2 as X\n"; p7 = i; i++;}
            if (pos8 == ' '){cout << i << ". mark cell b3 as X\n"; p8 = i; i++;}
            if (pos9 == ' '){cout << i << ". mark cell b4 as X\n"; p9 = i; i++;}
            if (pos10 == ' '){cout << i << ". mark cell b5 as X\n"; p10 = i; i++;}
            if (pos11 == ' '){cout << i << ". mark cell c1 as X\n"; p11 = i; i++;}
            if (pos12 == ' '){cout << i << ". mark cell c2 as X\n"; p12 = i; i++;}
            if (pos13 == ' '){cout << i << ". mark cell c3 as X\n"; p13 = i; i++;}
            if (pos14 == ' '){cout << i << ". mark cell c4 as X\n"; p14 = i; i++;}
            if (pos15 == ' '){cout << i << ". mark cell c5 as X\n"; p15 = i; i++;}
            if (pos16 == ' '){cout << i << ". mark cell d1 as X\n"; p16 = i; i++;}
            if (pos17 == ' '){cout << i << ". mark cell d2 as X\n"; p17 = i; i++;}
            if (pos18 == ' '){cout << i << ". mark cell d3 as X\n"; p18 = i; i++;}
            if (pos19 == ' '){cout << i << ". mark cell d4 as X\n"; p19 = i; i++;}
            if (pos20 == ' '){cout << i << ". mark cell d5 as X\n"; p20 = i; i++;}
            if (pos21 == ' '){cout << i << ". mark cell e1 as X\n"; p21 = i; i++;}
            if (pos22 == ' '){cout << i << ". mark cell e2 as X\n"; p22 = i; i++;}
            if (pos23 == ' '){cout << i << ". mark cell e3 as X\n"; p23 = i; i++;}
            if (pos24 == ' '){cout << i << ". mark cell e4 as X\n"; p24 = i; i++;}
            if (pos25 == ' '){cout << i << ". mark cell e5 as X\n"; p25 = i; i++;}
            cout << i << ". quit\n"; p26 = i;
            i = 1;
        }
        else
        {
            if (pos1 == ' '){cout << i << ". mark cell a1 as O\n"; p1 = i; i++;}
            if (pos2 == ' '){cout << i << ". mark cell a2 as O\n"; p2 = i; i++;}
            if (pos3 == ' '){cout << i << ". mark cell a3 as O\n"; p3 = i; i++;}
            if (pos4 == ' '){cout << i << ". mark cell a4 as O\n"; p4 = i; i++;}
            if (pos5 == ' '){cout << i << ". mark cell a5 as O\n"; p5 = i; i++;}
            if (pos6 == ' '){cout << i << ". mark cell b1 as O\n"; p6 = i; i++;}
            if (pos7 == ' '){cout << i << ". mark cell b2 as O\n"; p7 = i; i++;}
            if (pos8 == ' '){cout << i << ". mark cell b3 as O\n"; p8 = i; i++;}
            if (pos9 == ' '){cout << i << ". mark cell b4 as O\n"; p9 = i; i++;}
            if (pos10 == ' '){cout << i << ". mark cell b5 as O\n"; p10 = i; i++;}
            if (pos11 == ' '){cout << i << ". mark cell c1 as O\n"; p11 = i; i++;}
            if (pos12 == ' '){cout << i << ". mark cell c2 as O\n"; p12 = i; i++;}
            if (pos13 == ' '){cout << i << ". mark cell c3 as O\n"; p13 = i; i++;}
            if (pos14 == ' '){cout << i << ". mark cell c4 as O\n"; p14 = i; i++;}
            if (pos15 == ' '){cout << i << ". mark cell c5 as O\n"; p15 = i; i++;}
            if (pos16 == ' '){cout << i << ". mark cell d1 as O\n"; p16 = i; i++;}
            if (pos17 == ' '){cout << i << ". mark cell d2 as O\n"; p17 = i; i++;}
            if (pos18 == ' '){cout << i << ". mark cell d3 as O\n"; p18 = i; i++;}
            if (pos19 == ' '){cout << i << ". mark cell d4 as O\n"; p19 = i; i++;}
            if (pos20 == ' '){cout << i << ". mark cell d5 as O\n"; p20 = i; i++;}
            if (pos21 == ' '){cout << i << ". mark cell e1 as O\n"; p21 = i; i++;}
            if (pos22 == ' '){cout << i << ". mark cell e2 as O\n"; p22 = i; i++;}
            if (pos23 == ' '){cout << i << ". mark cell e3 as O\n"; p23 = i; i++;}
            if (pos24 == ' '){cout << i << ". mark cell e4 as O\n"; p24 = i; i++;}
            if (pos25 == ' '){cout << i << ". mark cell e5 as O\n"; p25 = i; i++;}
            cout << i << ". quit\n"; p26 = i;
            i = 1;
        }
        cin >> cell;

        if (cell == p1) {cell = 1; p1 = 0; p2 = 0; p3 = 0; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p2) {cell = 2; p2 = 0; p3 = 0; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p3) {cell = 3; p3 = 0; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p4) {cell = 4; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p5) {cell = 5; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p6) {cell = 6; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p7) {cell = 7; p7 = 0; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p8) {cell = 8; p8 = 0; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p9) {cell = 9; p9 = 0; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p10) {cell = 10; p10 = 0; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p11) {cell = 11; p11 = 0; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p12) {cell = 12; p12 = 0; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p13) {cell = 13; p13 = 0; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p14) {cell = 14; p14 = 0; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p15) {cell = 15; p15 = 0; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p16) {cell = 16; p16 = 0; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p17) {cell = 17; p17 = 0; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p18) {cell = 18; p18 = 0; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p19) {cell = 19; p19 = 0; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p20) {cell = 20; p20 = 0; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p21) {cell = 21; p21 = 0; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p22) {cell = 22; p22 = 0; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p23) {cell = 23; p23 = 0; p24 = 0; p25 = 0;}
        if (cell == p24) {cell = 24; p24 = 0; p25 = 0;}
        if (cell == p25) {cell = 25; p25 = 0;}
        if (cell == p26) cell = 26;


        change(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25, cell, s);
    }
    vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10, pos11, pos12, pos13, pos14, pos15, pos16, pos17, pos18, pos19, pos20, pos21, pos22, pos23, pos24, pos25);
}