# correct_cpp_hello_cli

Branch|[Travis CI](https://travis-ci.org)|[Codecov](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/correct_cpp_hello_cli.svg?branch=master)](https://travis-ci.org/richelbilderbeek/correct_cpp_hello_cli)|[![codecov.io](https://codecov.io/github/richelbilderbeek/correct_cpp_hello_cli/coverage.svg?branch=master)](https://codecov.io/github/richelbilderbeek/correct_cpp_hello_cli/branch/master)

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'Hello CLI'.

## Goal

 * Write a command-line interface (CLI) application

## Prerequisites

 * Understand [how this course works](https://github.com/richelbilderbeek/correct_cpp/blob/master/how_this_course_works.md)
 * Have written [a correct 'Hello world' program](https://github.com/richelbilderbeek/correct_cpp_hello_world)

## Exercise

Write a command-line interface (CLI) program that writes `Hello` to the screen.

If the user has supplied a command-line argument, show it, after adding a space between 'Hello' and the argument.
Ignore command-line arguments beyond the first.
In all cases, the output should be followed by a newline:

Call to `hello_cli`|Result
---|---
`./hello_cli`|`Hello` (with newline)
`./hello_cli world`|`Hello world` (with newline)
`./hello_cli world i_am_ignored`|`Hello world` (with newline)

This is the code you start with:

```c++
main(argc, argv)
{
  //Your code here
}
```

 * See [run your program with arguments](https://github.com/richelbilderbeek/correct_cpp/blob/master/run_your_program_with_arguments.md) if you need help on this
 * [argv](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgv.md) is a container of raw strings
 * [argv](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgv.md) has [argc](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgc.md) elements
 * [argc](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgc.md) is never equals to zero
 * If [argc](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgc.md) equals one, just show 'Hello'
 * If [argc](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgc.md) equals two or more, show 'Hello', a space, and the content of [argv](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgv.md)[1]
 * Use (and prefer [1]) [std::cout](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdCout.md) 
 * Do not use [std::endl](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdEndl.md) [2]

## External links

 * [Download the Qt Creator file `main.pro`](https://raw.githubusercontent.com/richelbilderbeek/correct_cpp/master/shared/main.pro)

## References

 * [1] [C++ Core Guidelines: SL.io.3: Prefer iostreams for I/O](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-streams)
 * [2] [C++ Core Guidelines: SL.io.50: Avoid endl](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-endl)
