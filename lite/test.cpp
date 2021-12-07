#include "list/List.h"

#include <iostream>

int main() {
    lite::List<char> l(5);
    *l = 'h';
    *(l + 1) = 'e';
    *(l + 2) = 'l';
    *(l + 3) = 'l';
    *(l + 4) = 'o';


    lite::List<char> b = l;

    std::cout << std::endl;
}