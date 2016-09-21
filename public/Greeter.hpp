#include <string>

class Greeter {
public:
  Greeter(std::string name);
  void say_hello();
private:
  std::string name;
};
