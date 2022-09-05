#include "iter.hpp"

int main()
{
    int         intArray[4] = {4, 2, 42, 420};
    char        str[] = "55 is awsome";

    ::iter_ft<int>(intArray, 4, print<int>);
	std::cout << "-----\n";
    ::iter_ft<char>(str, 12, print<char>);
}