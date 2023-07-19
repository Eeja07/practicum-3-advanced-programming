#include "include/point.hpp"
#include <cmath>

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Point::distanceTo(Point p)
{
    double dx = p.x - this->x;
    double dy = p.y - this->y;
    return std::sqrt(dx * dx + dy * dy);
}

Point Point::closestTo(std::vector<Point> Koordinat_4leafSigil)
{
    double jarakTerdekat_akhir = distanceTo(Koordinat_4leafSigil[0]);
    Point titikTerdekat = Koordinat_4leafSigil[0];

    for (int i = 1; i < Koordinat_4leafSigil.size(); i++)
    {
        double jarakTerdekat_awal = distanceTo(Koordinat_4leafSigil[i]);
        if (jarakTerdekat_awal < jarakTerdekat_akhir)
        {
            jarakTerdekat_akhir = jarakTerdekat_awal;
            titikTerdekat = Koordinat_4leafSigil[i];
        }
    }

    return titikTerdekat;
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}
