# correct_cpp_hello_cli

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'Hello CLI'.

## Exercise

Write a command-line interface (CLI) program that writes `Hello ` to the screen, 
followed by all command-line arguments and a newline.

```
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  // Conversion
  const std::vector<std::string> args(argv + 1, argv + argc);

  //Your code here
}
```

### Examples

Call to `hello_cli`|Result
---|---
`./hello_cli`|`Hello` (with newline)
`./hello_cli Richel`|`Hello Richel` (with newline)
`./hello_cli Richel Bilderbeek`|`Hello Richel Bilderbeek` (with newline)

### Tips

 * Use `int main(int argc, char* argv[])`
 * `char* argv[]` is read as 'an array of raw strings'
 * `argc` is the number of raw strings in `argv`
 * Use a `for` loop to loop through all raw strings
 * `argv[0]` gives the full path to the program's executable
