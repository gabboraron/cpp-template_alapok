#include <iostream>
#include "my_template.h"
#include "my_snd_template.h"

using namespace std;

int main()
{
    cout << "I know this shit too!" << endl;
    my_template<int> my;
    cout << "add: " << my.add(2) << endl;
    cout << "mult: " << my.mult(2,5) << endl;

    my_snd_template<int, double> my_snd;
    cout << "add_by_fst: " << my_snd.add_by_fst(2,5.5) << endl;
    cout << "add_by_snd: " << my_snd.add_by_snd(2,5.5) << endl;

    return 0;
}
