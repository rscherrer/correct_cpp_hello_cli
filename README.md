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
