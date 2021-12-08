#include "list/List.h"

#include <iostream>

void setChar(char& c) {
    c = 'a';
}

void printChar(const char& c) {
    std::cout << c;
}


int main() {
    lite::List<char> l(5);
    *l = 'h';
    *(l + 1) = 'e';
    *(l + 2) = 'l';
    *(l + 3) = 'l';
    *(l + 4) = 'o';


    l.forEach(&setChar);
    l.forEach(&printChar);

    std::cout << std::endl;
}