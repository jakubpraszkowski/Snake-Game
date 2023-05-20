#include <iostream>
#include <cstdlib>
#include "Logic.h"
#include "Board.h"
#include <csignal>

int main()
{
    srand(time(nullptr));
    Logic l1;
    l1.chooseBoard();
    l1.refresh();
    sleep(2);

    return 0;
}
