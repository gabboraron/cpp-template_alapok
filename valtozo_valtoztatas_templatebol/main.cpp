#include <iostream>
#include "changer.h"


using namespace std;

int main()
{
    cout << "Valtozo valtoztatasa templatebol" << endl;
    int a = 5;
    cout << "eredeti eretek: " << a <<endl;

    changer<int> ch(a);
    cout << "uj eretek: " << a << endl;

    return 0;
}
