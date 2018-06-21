#include <iostream>
#include "spec_template.h"

using namespace std;

int main()
{
    cout << "Specialized templates!" << endl << endl;

    spec_template<char> character;
    character.print();

    spec_template<int> number;
    number.print();

    spec_template<string> text;
    text.print();

    return 0;
}
