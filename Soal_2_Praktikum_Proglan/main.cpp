#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include "largest-number.cpp"

int main()
{
    LargestNumber peti;
    peti.readInput();
    peti.sortNumbers();
    std::string largestNumber = peti.getLargestNumber();
    std::cout << largestNumber << std::endl;

    return 0;
}