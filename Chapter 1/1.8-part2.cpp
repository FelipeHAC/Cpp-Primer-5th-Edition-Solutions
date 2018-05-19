#include <iostream>

int main()
{
    std::cout << "/*";                  // Okay.
    std::cout << "*/";                  // Okay.
    std::cout << /* "*/" */; //";       // Fixed.
    std::cout << /* "*/" /* "/*" */;    // Okay.
    return 0;
}

