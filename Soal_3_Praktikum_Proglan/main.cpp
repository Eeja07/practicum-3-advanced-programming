#include "point.cpp"
#include <iostream>

using namespace std;

int main()
{
    double x0, y0;
    std::cin >> x0 >> y0;

    int jumlah_4LeafSigil;
    std::cin >> jumlah_4LeafSigil;

    std::vector<Point> Koordinat_4leafSigil;
    for (int i = 0; i < jumlah_4LeafSigil; i++)
    {
        double x, y;
        std::cin >> x >> y;
        Koordinat_4leafSigil.push_back(Point(x, y));
    }

    Point titikAwal(x0, y0);
    Point titikTerdekat = titikAwal.closestTo(Koordinat_4leafSigil);

    std::cout << "Titik terdekat adalah (" << titikTerdekat.getX() << ", " << titikTerdekat.getY() << ")" << std::endl;

    return 0;
}