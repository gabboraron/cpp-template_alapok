#include <iostream>
#include "alma.h"

using namespace std;

int main()
{
    Alma<int> a;                //a objektum | az Alma osztály int-et ad T helyére
    cout << a.sum(3,5) << endl; //a objektum függvényét hívja aminek a paramétere T típusú ami jelen esetben int
    return 0;
}
