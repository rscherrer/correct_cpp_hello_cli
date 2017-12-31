#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  // Conversion
  const std::vector<std::string> args(argv + 1, argv + argc);

  //Your code here
  std::cout << "Hello";
  for (const auto&s : args) { std::cout << ' ' << s; }
  std::cout << '\n';
}
