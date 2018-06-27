#include <iostream>
#include "my_example_template_with_iterator.h"
//using namespace std;

int main()
{
    std::cout << "Pelda iteratorra templateben!" << std::endl;

    my_example_template_with_iterator<int> myetwi;
    myetwi.fillVec();
    myetwi.show();

    return 0;
}
