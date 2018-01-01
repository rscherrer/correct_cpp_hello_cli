# correct_cpp_hello_cli

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'Hello CLI'.

## Exercise

Write a command-line interface (CLI) program that writes `Hello` to the screen.
If the use has supplied at a command-line argument, show it, seperated by a space.
Ignore command-line arguments beyond the first.
In all cases, the output should be followed by a newline:

Call to `hello_cli`|Result
---|---
`./hello_cli`|`Hello` (with newline)
`./hello_cli world`|`Hello world` (with newline)
`./hello_cli world i_am_ignored`|`Hello world` (with newline)

This is the code you start with:

```c++
int main(int argc, char* argv[])
{
  //Your code here
}
```

## Advice

 * Avoid `std::endl` [1]

## External links

 * [Richel Bilderbeek's page about argv](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgv.md)

## References

 * [1] [C++ Core Guidelines: SL.io.50: Avoid endl](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-endl)



