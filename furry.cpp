#include <iostream>

int main(int argc, char *argv[])
{
    if (argv[1] == NULL)
    {
        std::cout << "dumbass, it's: " << argv[0] << " <name>" << std::endl;
        return 1;
    }
    std::cout << argv[1] << " is a "
              << "!!" << std::endl;
    return 0;
}