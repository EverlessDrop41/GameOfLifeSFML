#ifndef GREETER_H
#define GREETER_H

#include "Greeter.hpp"
#include <iostream>

Greeter::Greeter(std::string name) {
  this->name = name;
}

void Greeter::say_hello() {
  std::cout << "Hello, " << this->name << "\n";
}

#endif
