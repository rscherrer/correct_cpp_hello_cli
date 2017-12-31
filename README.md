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

## Running

You can run your code from Qt Creator.


Alternatively, you can call the script `build`:

```
./build
```

Example output:

```
richel@winloos:~/GitHubs/correct_cpp_hello_cli$ ./build 
make -f Makefile.Release
make[1]: Entering directory '/home/richel/GitHubs/correct_cpp_hello_cli'
g++ -c -m64 -pipe -std=c++17 -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++ -Werror -pg -O2 -Wall -W -D_REENTRANT -DNDEBUG -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -Irelease -o release/main.o main.cpp
g++ -m64 -pg	 -Wl,-O1 -o hello_cli release/main.o    -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
make[1]: Leaving directory '/home/richel/GitHubs/correct_cpp_hello_cli'
```

## Testing

You can create a Pull request to the original GitHub.

Alternatively, you can call the script `test`:

```
./test
```

Example output:

```
richel@winloos:~/GitHubs/correct_cpp_hello_cli$ ./test 
Correct
```
