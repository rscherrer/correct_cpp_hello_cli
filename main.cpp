#include <iostream>

/// Main function
int main(int argc, char * argv[]) {

    // Write Hello to the screen followed by the argument
    std::cout << "Hello ";

    if(argc > 1) {

        std::cout << argv[1];

    }

    std::cout << '\n';

    return 0;

}