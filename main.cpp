#include <iostream>
#include "Greeter.hpp"
#include <curses.h>

int main(int argc, char const *argv[]) {
    Greeter* g = new Greeter("Emily");
    g->say_hello();

  return 0;
}
