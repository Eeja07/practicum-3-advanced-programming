#include "include/largest-number.hpp"

void LargestNumber::readInput()
{
    int jumlah_peti;
    std::cin >> jumlah_peti;
    for (int i = 0; i < jumlah_peti; i++)
    {
        int angka_peti;
        std::cin >> angka_peti;
        angka_angka_Peti.push_back(angka_peti);
    }
}

bool LargestNumber::compare(int a, int b)
{
    std::string strA = std::to_string(a);
    std::string strB = std::to_string(b);
    return strA + strB > strB + strA;
}

void LargestNumber::sortNumbers()
{
    std::sort(angka_angka_Peti.begin(), angka_angka_Peti.end(), compare);
}

std::string LargestNumber::getLargestNumber()
{
    std::stringstream total_angkaPeti;
    for (int angka_peti : angka_angka_Peti)
    {
        total_angkaPeti << angka_peti;
    }
    return total_angkaPeti.str();
}
