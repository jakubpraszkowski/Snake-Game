#include <iostream>
#include <cstdlib>

#include "Logika.h"

int main()
{
    srand(time(NULL));
    Logika l1;
    l1.Wybor_planszy();
    l1.Odswiezanie();
    system("PAUSE");

    return 0;
}
