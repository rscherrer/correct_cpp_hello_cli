# correct_cpp_hello_cli

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'Hello CLI'.

## Exercise

Write a command-line interface (CLI) program that writes `Hello ` to the screen, 
followed by all command-line arguments seperated by spaces, in the end followed by a newline:

Call to `hello_cli`|Result
---|---
`./hello_cli`|`Hello` (with newline)
`./hello_cli Richel`|`Hello Richel` (with newline)
`./hello_cli Richel Bilderbeek`|`Hello Richel Bilderbeek` (with newline)

This is the code you start with:

```c++
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  // Conversion
  const std::vector<std::string> args(argv, argv + argc);

  //Your code here
}
```

## Advice

 * Avoid `std::endl` [1]
 * Prefer algorithms [2, 3] or range-for [4] over hand-written loops

## External links

 * [Richel Bilderbeek's page about std::copy](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdCopy.md)
 * [Richel Bilderbeek's page about range-for](https://github.com/richelbilderbeek/cpp/blob/master/content/CppRangeFor.md)

## References

 * [1] [C++ Core Guidelines: SL.io.50: Avoid endl](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-endl)
 * [2] Bjarne Stroustrup. The C++ Programming Language (3rd edition). ISBN: 0-201-88954-4. Chapter 18.12.1: 'Prefer algorithms to loops'.
 * [3] Scott Meyers. Effective STL. ISBN: 0-201-74962-9. Item 43: 'Prefer algorithm calls over hand-written loops'
 * [4] Bjarne Stroustrup. The C++ Programming Language (4th edition). 2013. ISBN: 978-0-321-56384-2. Chapter 9.8. Advice. page 240: '[3] Prefer a range-for-statement to a for-statement when there is a choice'



