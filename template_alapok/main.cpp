#include <iostream>
#include "alma.h"

using namespace std;

int main()
{
    Alma<int> a;                //a objektum | az Alma oszt�ly int-et ad T hely�re
    cout << a.sum(3,5) << endl; //a objektum f�ggv�ny�t h�vja aminek a param�tere T t�pus� ami jelen esetben int
    return 0;
}
