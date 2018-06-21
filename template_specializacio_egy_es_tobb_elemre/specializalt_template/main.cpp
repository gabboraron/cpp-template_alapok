#include <iostream>
#include "spec_template.h"

using namespace std;

int main()
{
    cout << "Specialized templates!" << endl << endl;

    spec_template<void(char)> character;
    character.print();

    spec_template<void(int)> number;
    number.print();

    spec_template<string> text;
    text.print();

    spec_template<void (string, int)> two_at_time;
    two_at_time.print();

    return 0;
}
