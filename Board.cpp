#include "Board.h"
#include <iostream>
#include <string>

using namespace std;

int Board::chooseBoard()
{
    cout << "Welcome to the Snake game." << endl;
    int choose;
    do {
        try
        {
            cout << "Choose a board. Available sizes:\n"
                    "1. 20x20\n"
                    "2. 30x30\n"
                    "3. 40x40\n" << endl;
            cout << "What is your choice?: ";
            cin >> choose;
            cout << endl;
            if (choose > 3 || choose < 1)
            {
                throw("Selected option does not exist");
            }
        }
        catch (char const* e)
        {
            cin.clear();
            cin.ignore(999, '\n');
            system("cls");
            cout << e << endl << endl;
        }
    } while (choose > 3 || choose < 1);
    choose--;
    return choose;
}

void Board::loadBoard()
{
    area = new std::string* [SizeX[choose]];

    for (int i = 0; i < SizeX[choose]; i++)
    {
        area[i] = new std::string[SizeY[choose]];
    }
    headX = SizeX[choose] / 2;
    headY = SizeY[choose] / 2;
    bodyX.push_back(headX+1);
    bodyY.push_back(headY);
}

void Board::printBoard()
{
    for (int i = 0; i < SizeX[choose]; i++)
    {
        for (int j = 0; j < SizeY[choose]; j++)
        {
            if (i == headY && j == headX)
            {
                area[i][j] = head;
            }
            else if (i == fruitY && j == fruitX)
            {
                area[i][j] = charFruit[whichFruit];
            }
            else area[i][j] = (char)255u;

            for (int k = 0; k < bodyX.size(); k++)
            {
                if (i == bodyY[k] && j == bodyX[k])
                {
                    area[i][j] = body;
                }
            }
        }
    }

    cout << score << endl;
    cout << (char)201u; // top left
    for (int i = 0; i < SizeX[choose]; i++)
    {
        cout << (char)205u; // side up
    }
    cout << (char)187u << endl; // top right

    for (int i = 0; i < SizeY[choose]; i++)
    {
        cout << (char)186u; // left side
        for (int j = 0; j < SizeX[choose]; j++)
        {
            cout << area[i][j]; // blank
        }
        cout << (char)186u << endl; // right side
    }

    cout << (char)200u; // bottom left
    for (int i = 0; i < SizeX[choose]; i++)
    {
        cout << (char)205u; // side bottom
    }
    cout << (char)188u << endl; // bottom right

    cout << "fruit: " << whichFruit << '\t' << '\t' << "headX:Y: " << headX << ':' << headY << endl;
    cout << "bodyX.size()/bodyY.size() : " << bodyX.size() << '/' << bodyY.size() << endl;
    for (int i = 0; i < bodyX.size(); i++) { cout << bodyX[i] << '\t' << bodyY[i] << endl; }
    cout << endl;
}

void Board::cleanup()
{
    for (int i = 0; i < SizeX[choose]; i++)
    {
        delete[] area[i];
    }
    delete[] area;
}