#include <iostream>
#include <cstdlib>
#include "Logic.h"

int main()
{
    srand(time(nullptr));
    Logic l1;
    l1.chooseBoard();
    l1.refresh();
    return 0;
}
